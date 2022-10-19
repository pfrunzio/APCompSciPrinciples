# Paola Frunzio
# 1.17.2021
# caesar cipher

from sys import argv
from cs50 import get_string

if len(argv) != 2:
    print("Please enter the right command.")
    exit(1)

# get text to encrypt
plaintext = get_string("plaintext: ")

print("ciphertext: ")
k = int(argv[1])

# encrypting
for i in plaintext:
    if str.isalpha(i) == True:
        p = ord(i)
        p += k
        # to make sure it stays in the letter range of ascii
        while p >= 123:
            p -= 26
        print(chr(p), end="")
    else:
        print(i, end="")
print()