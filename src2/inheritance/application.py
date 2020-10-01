from flask import Flask, render_template

app = Flask(__name__)

@app.route("/")
def inde():
    return render_template("inde.html")

@app.route("/more")
def more():
    return render_template("more.html")
