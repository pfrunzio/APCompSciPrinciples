# Paola Frunzio
# 1.5.2021
# input radius output area and circumference

from cs50 import get_float

radius = get_float("Enter the radius of the circle: ")
print(f"The area of the circle is {round(3.1415*radius**2, 2)} and the circumference is {2*3.1415*radius:.2f}.".format())
