# Paola Frunzio
# 2.24.2021
# mini database assignment two

from cs50 import SQL, get_int, get_string

db = SQL("sqlite:///stuff.db")

shows = db.execute("SELECT * FROM Shows")

# ex. 0
print("Shows in the database: ")
for row in shows:
    print(row["name"], row["type"])

# ex. 1
print("\nDiscover how many shows have a given number of stars: ")
stars = get_int("Enter a number of stars: ")
# print(db.execute("SELECT name FROM Shows WHERE stars=:s", s=stars))
x = 0
for row in shows:
    if row["stars"] == stars:
        print(row["name"])
        x += 1
if x == 0:
    print(f"There are no shows in the database with {stars} star(s).")

# ex. 2
print("\nDiscover what streaming services the shows in this database are found on: ")
netflix = 0
disney = 0
for row in shows:
    if row["type"] == "Netflix":
        netflix += 1
    elif row["type"] == "Disney Channel":
        disney += 1
print(f"There are {netflix} show(s) on Netflix and {disney} show(s) on Disney Channel.")

# ex. 3
print("\nEnter a new show into the database: ")
for row in shows:
    x=row["id"]
id = x + 1
name = get_string("Enter the show name: ")
type = get_string("Enter the streaming service this show is found on: ")
stars = get_int("How many stars out of five would you rate this show?")
db.execute("INSERT INTO 'Shows' ('id', 'name', 'type', 'stars') VALUES (':id', ':name', ':type', ':stars')", id=id, name=name, type=type, stars=stars)
