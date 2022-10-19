# Paola Frunzio
# 1.12.2021
# enter 5 numbers into a list. output the sum

from cs50 import get_int

myList = []
for i in range(5):
    myList.append(get_int("Enter a number to the list: "))

print(sum(myList))