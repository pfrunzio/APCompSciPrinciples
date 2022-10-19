# Paola Frunzio
# 1.8.2021
# output sequence

from cs50 import get_int

output = get_int("Enter how many numbers you want to output: ")

a = 0
b = 1
c = 0
for i in range(0,output):
    c += a
    print(c)
    a = b
    b = c