from flask import Flask, render_template
app = Flask(__name__)

@app.route('/')
def hello():
    return render_template("page.html")

@app.route('/alt')
def alt():
   return "boring"

@app.route('/yeet')
def yeetus():
    return "<p style='font-size: 50px'>ya yeet</p>"