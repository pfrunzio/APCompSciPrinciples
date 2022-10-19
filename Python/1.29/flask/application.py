from flask import Flask, render_template, request
app = Flask(__name__)

@app.route('/')
def first():
    return render_template("one.html")

@app.route("/next", methods=["POST"])
def nextPage():
    firstName=request.form.get("fn")
    lastName=request.form.get("ln")
    age=request.form.get("age")
    color=request.form.get("favColor")
    end = int(age) % 10
    if end > 10:
        end /= 10
    if end == 1:
        end = "st"
    elif end == 2:
        end = "nd"
    elif end == 3:
        end = "rd"
    else:
        end = "th"
    if int(age) > 10 and int(age) < 14:
        end = "th"
    if int(age) > 50:
        return render_template("three.html", fn=firstName, ln=lastName, age=age, numEnding=end, favColor=color)
    else:
        return render_template("two.html", fn=firstName, ln=lastName, age=age, numEnding=end, favColor=color)
