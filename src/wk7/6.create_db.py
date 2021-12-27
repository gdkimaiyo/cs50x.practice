# CREATE a db and store records using python

import csv
import sqlite3 as SQL

db = SQL.connect("details.db")

print("Database Opened.")
db.execute("CREATE TABLE details (id INTEGER, name TEXT, contactName TEXT, country TEXT, PRIMARY KEY(id))")

with open("details.csv", "r") as csvfile:
    reader = csv.DictReader(csvfile)
    for row in reader:
        name = row["CustomerName"]
        contactName = row["ContactName"]
        country = row["Country"]

        db.execute("INSERT INTO details (name, contactName, country) VALUES(?, ?, ?)", (name, contactName, country))


db.execute("INSERT INTO details (name, contactName, country) VALUES('Eastern Connection', 'Ann Devon', 'UK')")

db.commit()
print("Records successfully created...")
db.close()
print("Database closed.")
