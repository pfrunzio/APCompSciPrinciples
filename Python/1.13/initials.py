# Paola Frunzio
# 1.13.2021
# input name output initials

from cs50 import get_string

# easy boring way of doing it
# fn = get_string("Enter your first name:")
# ln = get_string("Enter your last name:")
# print(fn[0], ln[0], sep="")


# # fun and more interesting solution
# name = get_string("Enter your full name: ")

# for i in name:
#     if i.isupper() == True:
#         print(i, end="")
# print()


# doing the same thing but without assuming that the name will be capitalized
name = get_string("Enter your full name: ")

x = False
print(name[0], end="")
for i in name:
    if x == True:
        print(i, end="")
        x = False
    if i == " ":
        x = True
print()