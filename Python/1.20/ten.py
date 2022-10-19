# Paola Frunzio
# 1.20.2021
# save ten user inputed numbers to a file

from cs50 import get_int

file = open("ten.txt", "w")

for i in range(10):
    num = get_int("Enter a number: ")
    file.write(str(num))
    file.write("\n")

file.close()