# Paola Frunzio
# 1.20.2021
# read ten integers from a file and output them in reverse order to a second file

fileIn = open("input.txt", "r")
fileOut = open("output.txt", "w")

numbers = []

for i in fileIn:
    numbers.append(i)

numbers.reverse()
fileOut.writelines(numbers)

fileIn.close()
fileOut.close()