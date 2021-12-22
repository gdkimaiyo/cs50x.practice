import sys
import csv

if len(sys.argv) != 2:
    sys.exit("USAGE: python3 teams.py CSV_FILENAME")

teams = []

filename = sys.argv[1]
with open(filename, 'r') as csvfile:
    reader = csv.DictReader(csvfile)
    for row in reader:
        team = row
        team['rating'] = int(row['rating'])
        teams.append(team)

print(teams)
