# Paola Frunzio
# 1.13.2021
# output command line

from sys import argv

if len(argv) < 2:
    print("Invalid input")
else:
    for i in argv[1:]:
        print(i)
