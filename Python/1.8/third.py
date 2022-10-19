# Paola Frunzio
# 1.6-8.2021
# print every third number between a range

from cs50 import get_int

num1 = get_int("Enter the minimum number: ")
num2 = get_int("Enter the maximum number: ")
if num1 > num2:
    num1, num2 = num2, num1
for i in range(num1,num2,3):
    print(i)

