# Paola Frunzio
# 1.15.2021
# get_int but positive function

from cs50 import get_int

def get_positive_int(sentence):
    num = 0
    while num <= 0:
        num = get_int(sentence)
    return num

number = get_positive_int("Enter a number: ")
print(number, "is positive.")