# Paola Frunzio
# 1.8.2021
# guess number

from cs50 import get_int
import random

num = random.randint(0,1000)
guess = 0

while(guess != num):
    guess = get_int("Guess the number: ")
    if guess > num:
        print("lower")
    elif guess < num:
        print("higher")

print("yup")