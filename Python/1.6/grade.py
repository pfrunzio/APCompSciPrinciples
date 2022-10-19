# Paola Frunzio
# 1.6.2021
# interpret letter grade

from cs50 import get_int

grade = get_int("Enter your grade: ")
if grade >= 90:
    print("A")
elif grade >= 80:
    print("B")
elif grade >= 70:
    print("C")
elif grade >= 60:
    print("D")
else:
    print("F")