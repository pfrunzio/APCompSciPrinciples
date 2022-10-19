# Paola Frunzio
# 1.6.2021
# print all even up to a number

from cs50 import get_int

num = get_int("Enter the maximum number: ")
for i in range(1,num,2):
    print(i)