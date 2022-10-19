# Paola Frunzio
# 1.13.2021
# output sum of floats from command line

from sys import argv

if len(argv) < 3:
    print("Invalid input")
    exit()

total = 0
for i in argv[1:]:
    total += float(i)

print(total)