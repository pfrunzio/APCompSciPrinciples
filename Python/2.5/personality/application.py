from flask import Flask, render_template, request
app = Flask(__name__)

@app.route('/')
def quiz():
    return render_template("index.html")

@app.route('/results', methods=["POST"])
def results():
    name=request.form.get("name")

    food = [0,0,0,0]
    # Waffle = 0
    # Pancake = 1
    # French Toast = 2
    # Scrambled eggs = 3

    room=request.form.get("room")
    if int(room) == 5:
        food[3] += 1
    elif int(room) == 4:
        food[2] += 1
    elif int(room) == 2:
        food[0] += 1
    elif int(room) == 1:
        food[1] += 1

    color=request.form.get("color")
    if color =="yellow":
        food[3] += 1
    elif color =="green":
        food[0] += 1
    elif color =="blue":
        food[1] += 1
    elif color =="red":
        food[2] += 1

    insult=request.form.get("insult")
    if insult == "weak":
        food[3] += 1
    elif insult == "ignorant":
        food[2] += 1
    elif insult == "unkind":
        food[0] += 1
    elif insult == "boring":
        food[1] += 1

    classs=request.form.get("class")
    if classs == "melee":
        food[3] += 1
    elif classs == "ranged":
        food[1] += 1
    elif classs == "mage":
        food[0] += 1
    elif classs == "summoner":
        food[2] += 1

    skill=request.form.get("skill")
    print(skill)
    if skill == "braid":
        food[1] += 1
    if skill == "fish":
        food[3] += 1
    if skill == "type":
        food[2] += 1
    if skill == "plug":
        food[0] += 1

    # percentages
    pwaffle=food[0]/5*100
    ppancake=food[1]/5*100
    pfrenchtoast=food[2]/5*100
    pegg=food[3]/5*100

    if max(food) == food[0]:
        result = "waffle"
        meaning="You're the mom friend and loved magic tree house books as a kid."
        image="waffle.jpeg"
    elif max(food) == food[1]:
        result = "pancake"
        meaning="You like things that are simple and always have an orderly storage system in sandbox games."
        image="pancake.jpeg"
    elif max(food) == food[2]:
        result = "french toast"
        meaning="You're a little fancy and very smart. Next time you go christmas shopping don't forget to pick up a nice scented candle."
        image="frenchtoast.jpg"
    elif max(food) == food[3]:
        result = "scrambled egg"
        meaning="You're chaotic and love messing around, but you're secretly a softy and should try buying a duck onesie."
        image="eggs.jpg"

    return render_template("results.html", name=name, result=result, meaning=meaning, image=image, pwaffle=pwaffle, ppancake=ppancake, pfrenchtoast=pfrenchtoast, pegg=pegg)