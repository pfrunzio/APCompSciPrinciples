# Paola Frunzio
# 2.26.2021-3.11.2021
# Database Programming Assignment

from flask import Flask, render_template, request
from cs50 import SQL

app = Flask(__name__)
db = SQL("sqlite:///backend.db")

# main display page
@app.route('/')
@app.route('/display', methods=["POST"])
def display():
    # get here by default; from back buttons on mb.html, edit.html, check.html, add.html, delete.html
    mb = db.execute("SELECT name FROM MeritBadges")
    badges = []
    for row in mb:
        badges.append(row["name"])
    return render_template("display.html", badges=badges)

# specific merit badge
@app.route('/mb', methods=["POST"])
def mb():
    # get here from display.html
    name = request.form.get("name")
    mb = db.execute("SELECT * FROM MeritBadges WHERE name=:name", name=name)
    for row in mb:
        photoid = row["photoid"]
        eagle = row["eagle"]
        started = row["started"]
        startdate = row["startdate"]
        completed = row["completed"]
        completiondate = row["completiondate"]
    if eagle == "True":
        em = "Eagle Required Merit Badge"
    else:
        em = ""
    return render_template("mb.html", name=name, photoid=photoid, em=em, started=started, startdate=startdate, completed=completed, completiondate=completiondate)


# EDIT SEQUENCE
# page with fields edit and remove badges
@app.route('/edit', methods=["POST"])
def edit():
    # get here from mb.html
    name = request.form.get("name")
    mb = db.execute("SELECT * FROM MeritBadges WHERE name=:name", name=name)
    for row in mb:
        oldstarted = row["started"]
        oldstartdate = row["startdate"]
        oldcompleted = row["completed"]
        oldcompletiondate = row["completiondate"]
        oldcounselor = row["counselor"]
        oldcompletereqs = row["completereqs"]
    return render_template("edit.html", name=name, oldstarted=oldstarted, oldstartdate=oldstartdate, oldcompleted=oldcompleted, oldcompletiondate=oldcompletiondate, oldcounselor=oldcounselor, oldcompletereqs=oldcompletereqs)

# page to check that info is correct before editing table
@app.route('/checkedit', methods=["POST"])
def checkedit():
    # get here from edit.html
    mb = []

    mb.append(request.form.get("name"))
    mb.append(request.form.get("started"))
    mb.append(request.form.get("startdate"))
    mb.append(request.form.get("completed"))
    mb.append(request.form.get("completiondate"))
    mb.append(request.form.get("counselor"))
    mb.append(request.form.get("completereqs"))

    return render_template("check.html", actioning="have edited", pastaction="checkedit", nextaction="edited", mb=mb)
    # table of data, but with a button at the bottom that asks if you are ok with this submission

@app.route('/edited', methods=["POST"])
def edited():
    # get here from check.html
    mb = request.form.get("mb")

    db.execute("UPDATE MeritBadges SET started=:s,startdate=:sd,completed=:c,completiondate=:cd,counselor=:co,completereqs=:cr WHERE name=:n", n=mb[0],s=mb[1],sd=mb[2],c=mb[3],cd=mb[4],co=mb[5],cr=mb[6])
    return display()


# ADD SEQUENCE
# page with form to add a badge
@app.route('/add', methods=["POST"])
def add():
    # get here from display.html
    return render_template("add.html")

# page to check that info is correct before adding to table
@app.route('/checkadd', methods=["POST"])
def checkadd():
    # get here from add.html
    mb=[]
    name = request.form.get("name")

    mb.append(name)

    # info = db.execute("SELECT * FROM AllBadges WHERE name=:name", name=name)
    # for row in info:
    #     mb.append(row["eagle"])
    #     mb.append(row["photoid"])
    #     totalreqs = row["totalreqs"]

    mb.append(request.form.get("started"))
    mb.append(request.form.get("startdate"))
    mb.append(request.form.get("completed"))
    mb.append(request.form.get("completiondate"))
    mb.append(request.form.get("counselor"))
    completereqs = request.form.get("completereqs")
    mb.append(completereqs)
    # mb.append(totalreqs)

    # percentdone = round(int(completereqs)/int(totalreqs),2)

    return render_template("check.html", actioning="are adding", pastaction="checkadd", nextaction="added", mb=mb)
    # table of data, but with a button at the bottom that asks if you are ok with this submission

@app.route('/added', methods=["POST"])
def added():
    # get here from check.html

    mb = request.form.get("mb")
    print(mb)

    # fix this later
    # db.execute("INSERT INTO 'MeritBadges' ('name','started','completed','completiondate','counselor','completereqs') VALUES ('name=:name','started=:started','startdate=:startdate','completed=:completed','completiondate=:completiondate','counselor=:counselor','completereqs=:completereqs')",name=mb[0],started=mb[1],startdate=mb[2],completed=mb[3],completiondate=mb[4],counselor=mb[5],completereqs=mb[6])
    return display()


# DELETE SEQUENCE
# page to check before deleting
@app.route('/checkdelete', methods=["POST"])
def checkdelete():
    # get here from mb.html
    name = request.form.get("name")
    eagle = db.execute("SELECT eagle FROM MeritBadges WHERE name=:name", name=name)

    if eagle == True:
        return render_template("denial.html", reason="This badge is an eagle required merit badge so it can't be deleted.")

    # get the info for the table
    mb=[]

    mb.append(request.form.get("name"))
    mb.append(request.form.get("started"))
    mb.append(request.form.get("startdate"))
    mb.append(request.form.get("completed"))
    mb.append(request.form.get("completiondate"))
    mb.append(request.form.get("counselor"))
    mb.append(request.form.get("completereqs"))

    return render_template("check.html", actioning="are deleting", pastaction="mb", nextaction="deleted", mb=mb)

@app.route('/deleted', methods=["POST"])
def deleted():
    # get here from delete.html

    mb = request.form.get("mb")
    print(mb[3])
    # db.execute("DELETE * FROM MeritBadges WHERE name=:name", name=mb[0])

    return display()
