# Paola Frunzio
# 1.20.2021
# read in two files and add to output in a third file

fileOne = open("first.txt", "r")
fileTwo = open("second.txt", "r")
fileThree = open("third.txt", "w")

for i in range(10):
    num1 = fileOne.readline()
    num2 = fileTwo.readline()
    total = int(num1) + int(num2)
    fileThree.write(str(total))
    fileThree.write("\n")

fileOne.close()
fileTwo.close()
fileThree.close()