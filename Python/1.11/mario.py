# Paola Frunzio
# 1.11.2021
# mario project

from cs50 import get_int

height = 0
while(height < 1 or height > 8):
    height = get_int("Height: ")

row = 1
while (row <= height):
    # left spaces
    x = height - row - 1
    while(x > -1):
        print(" ", end="")
        x -= 1

    # left #
    x = 1
    while(x <= row):
        print("#", end="")
        x += 1

    # middle spaces
    print("  ", end="")

    # right #
    x = 1
    while(x <= row):
        print("#", end="")
        x += 1
    
    print()
    row += 1