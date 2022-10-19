# Paola Frunzio
# 1.19.2021
# input grades from one file output averages to another file

file = open("grades.txt", "r")

numOfGrades = 3

# for i in range(3): # number of students
name = file.readline()
average = 0
# for i in range(numOfGrades):
grade = file.readline()
grade = int(grade)
print(grade)
average += grade
print(average)
average = average / numOfGrades

grade = file.readline()
grade = int(grade)
print(grade)
average += grade

print(average)

# file = open("averages.txt", "w")

# for i in range(3):
#     file.write("Student", i)
#     file.write(average)