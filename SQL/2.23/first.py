# Paola Frunzio
# 2.23.2021
# query from SQL

from cs50 import SQL, get_string

db = SQL("sqlite:///classes.db")

# creates a dictionary aka 2D list
classes = db.execute("SELECT * FROM Classes")

myTeacher = get_string("Enter your teacher: ")
classInfo = db.execute("SELECT * FROM Classes WHERE teacherLName=:t", t=myTeacher)

for row in classInfo:
    print(row["Subject"], row["Building"], row["RoomNum"])