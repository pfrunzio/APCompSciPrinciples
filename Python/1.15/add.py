# Paola Frunzio
# 1.15.2021
# input two number and get sum with a function

from cs50 import get_int

def getSum(num1, num2):
    return num1 + num2

# program
one = get_int("Enter a number: ")
two = get_int("Enter a number: ")

total = getSum(one, two)

print(f"The sum of {one} and {two} is {total}.")