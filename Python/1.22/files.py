# Paola Frunzio
# 1.22.2021
# create a file outputting the og data plus tuition

fileIn = open("files.txt", "r")
fileOut = open("tuition.txt", "w")

num = int(fileIn.readline())

for i in range(num):
    file = fileIn.readline()
    data = file.split()
    tuition = 0

    # calculate tuition
    if int(data[1]) < 12:
        if int(data[2]) == 1:
            tuition += int(data[1]) * 450
        else:
            tuition += int(data[1]) * 800
    else:
        if int(data[2]) == 1:
            tuition += int(data[1]) * 6000
        else:
            tuition += int(data[1]) * 12000
    if int(data[3]) == 1:
        tuition += 4000

    # write into new file
    for i in range(len(data)):
        fileOut.write(data[i] + " ")
    fileOut.write(str(tuition) + "\n")

fileIn.close()
fileOut.close()