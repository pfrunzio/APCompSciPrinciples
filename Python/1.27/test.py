# Paola Frunzio
# 1.27.2021
# Python Test

from cs50 import get_float, get_int

# 1. function to determine if students will graduate with honors
def withHonors(gpa):
    if gpa >= 3.8:
        return "summa cum laude"
    elif gpa >= 3.6:
        return "magna cum laude"
    elif gpa >= 3.4:
        return "cum laude"
    else:
        return "no honor"

# 4. function to determine how many students are on probation
def probation(gpaL):
    x = 0
    for i in range(len(gpaL)):
        if float(gpaL[i]) < 2:
            x += 1
    return x

# 2. input gpa, output what honor if any
gpa = get_float("Enter your gpa: ")
honor = withHonors(gpa)
print(f"With a gpa of {gpa} a student would earn {honor}.")

# 3. read a file which includes information on students and store data in lists
file = open("studentInfo.txt", "r")
info = file.read()
sinfo = info.split()
idList = []
gpaList = []
for i in range(0, len(sinfo), 2):
    idList.append(sinfo[i])
for i in range(1, len(sinfo), 2):
    gpaList.append(sinfo[i])
file.close()

# 5. output the number of students of probation to a text file
file = open("probation.txt", "w")
num = probation(gpaList)
file.write(str(num))
file.close()

# extra: input id number output the honor that id earned
idnum = get_int("Enter the id number: ")
for i in range(len(idList)):
    if idnum == int(idList[i]):
        break
honor2 = withHonors(float(gpaList[i]))
print(f"Student {idnum} had a gpa of {gpaList[i]} and earned {honor2}.")
