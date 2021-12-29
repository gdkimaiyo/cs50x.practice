from flask import Flask, render_template, redirect, request
import sqlite3 as SQL

# Configure application
app = Flask(__name__)

SPORTS = [
    "Dodgeball",
    "Flag Football",
    "Soccer",
    "Volleyball",
    "Ultimate Frisbee"
]

@app.route("/")
def index():
    return render_template("index.html")

@app.route("/register")
def register():
    return render_template("register.html", sports=SPORTS)

@app.route("/signup", methods=["POST"])
def signup():
    # Open DB
    db = SQL.connect("froshims.db")
    # db.execute("CREATE TABLE members (id INTEGER, name TEXT, sport TEXT, PRIMARY KEY(id))")

    name = request.form.get('name')
    sport = request.form.get('sport')

    if not name:
        return render_template("error.html", errorMessage="Your name is missing")
    if not sport:
        return render_template("error.html", errorMessage="Sport is missing")
    if sport not in SPORTS:
        return render_template("error.html", errorMessage="Sport is Invalid!")

    db.execute("INSERT INTO members (name, sport) VALUES(?, ?)", (name, sport))
    db.commit()
    # Close DB
    db.close()

    return redirect("/members")

@app.route("/members")
def members():
    # Open DB
    db = SQL.connect("froshims.db")
    # Return db table rows just like python dict
    db.row_factory = SQL.Row
    MEMBERS = db.execute("SELECT * FROM members").fetchall()
    # Close DB
    db.close()
    return render_template("members.html", members=MEMBERS)

@app.route("/deregister", methods=["POST"])
def deregister():
    # Open DB
    memberId = request.form.get('memberId')
    db = SQL.connect("froshims.db")
    db.execute("DELETE FROM members WHERE id=?", (memberId))
    db.commit()
    # Close DB
    db.close()
    return redirect("/members")
