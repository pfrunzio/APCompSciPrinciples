from sys import argv
from cs50 import get_string

def encrypt(p, key):
    c = []
    j = 0
    for i in range(0,len(p)):
        if p[i].isalpha() == True:
            # get key
            k = ord(key[j])
            if (k >= 97 and k <= 122): # uppercase letters
                k -= 97
            elif (k >= 65 and k <= 90): # lowercase letters
                k -= 65
            j += 1
            if (j == len(key)):
                j = 0

            out = ord(p[i]) + k

            # check that they are still letters and in the right case
            if (out > 122):
                while(out > 122):
                    out -= 26
            elif (out < 97 and out > 90):
                while(out > 90):
                    out -= 26

            # append encypted character to the list
            c.append(chr(out))
        else:
            # append non alphabetic character to the list
            c.append(p[i])
    ct = "".join(c)
    return ct


if len(argv) < 2:
    print("Your command line must include a key")
    exit()

key = list(argv[1])

for i in key:
    if i.isalpha() == False:
        print("Your key may only include alphabetic charcters")
        exit()

plaintext = get_string("Enter plaintext: ")
ciphertext = encrypt(plaintext, key)

print("Ciphertext:", ciphertext)
