# Paola Frunzio
# 1.22.2021
# censor words stored in a text file

from sys import argv
from cs50 import get_string

if len(argv) != 2:
    print("Usage: python bleep.py dictionary")
    exit(1)

message = get_string("What message would you like to censor? ")
check = message.split()

file = open(argv[1], "r")
text = file.read()
banned = text.strip()
banned = text.split()

# censor
for i in range(len(check)):
    if str.lower(check[i]) in banned:
        censor = []
        for j in range(len(check[i])):
            censor.append("*")
        x = "".join(censor)
        check[i] = x

final = " ".join(check)
print(final)
