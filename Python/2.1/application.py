from flask import Flask, render_template, request
app = Flask(__name__)

@app.route('/')
def index():
    return render_template("index.html")

@app.route('/output', methods=["POST"])
def cv():
    themeColor=request.form.get("themeColor")
    name=request.form.get("name")
    occupation=request.form.get("occupation")
    location=request.form.get("location")
    email=request.form.get("email")
    phonenumber=request.form.get("phonenumber")

    skill1=request.form.get("skill1")
    pskill1=request.form.get("pskill1")
    skill2=request.form.get("skill2")
    pskill2=request.form.get("pskill2")
    skill3=request.form.get("skill3")
    pskill3=request.form.get("pskill3")

    language1=request.form.get("language1")
    planguage1=request.form.get("planguage1")
    language2=request.form.get("language2")
    planguage2=request.form.get("planguage2")
    language3=request.form.get("language3")
    planguage3=request.form.get("planguage3")

    work1=request.form.get("work1")
    swork1=request.form.get("swork1")
    dwork1=request.form.get("dwork1")
    work2=request.form.get("work2")
    swork2=request.form.get("swork2")
    ework2=request.form.get("ework2")
    dwork2=request.form.get("dwork2")

    edu1=request.form.get("edu1")
    sedu1=request.form.get("sedu1")
    eedu1=request.form.get("eedu1")
    dedu1=request.form.get("dedu1")
    edu2=request.form.get("edu2")
    sedu2=request.form.get("sedu2")
    eedu2=request.form.get("eedu2")
    dedu2=request.form.get("dedu2")

    return render_template("cv.html", themeColor=themeColor, name=name, occupation=occupation, location=location, email=email, phonenumber=phonenumber,
    skill1=skill1, pskill1=pskill1, skill2=skill2, pskill2=pskill2, skill3=skill3, pskill3=pskill3,
    language1=language1, planguage1=planguage1, language2=language2, planguage2=planguage2, language3=language3, planguage3=planguage3,
    work1=work1, swork1=swork1, dwork1=dwork1, work2=work2, swork2=swork2, ework2=ework2, dwork2=dwork2,
    edu1=edu1, sedu1=sedu1, eedu1=eedu1, dedu1=dedu1, edu2=edu2, sedu2=sedu2, eedu2=eedu2, dedu2=dedu2)