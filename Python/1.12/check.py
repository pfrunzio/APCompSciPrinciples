# Paola Frunzio
# 1.12.2021
# fill list with 5 things then check for 1

myList = []
for i in range(5):
    myList.append(input("Enter an item to the list: "))

word = input("Enter item to check if it's in the list: ")
if word in myList:
    print("yes")
else:
    print("no")
