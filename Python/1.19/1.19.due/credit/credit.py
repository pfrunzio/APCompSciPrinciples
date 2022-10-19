# Paola Frunzio
# 1.13.2021
# determine whether a credit card number is valid and what company it is from

from cs50 import get_int

# get card number
card = get_int("Card Number: ")

# get checksum
checksum = 0
placevalue = 100
for i in range(8):
    x = ((((card % placevalue) - (card % (placevalue / 10))) / (placevalue / 10)) * 2)
    checksum += (((x % 100) - (x % 10)) / 10) + (x % 10)
    placevalue *= 100
placevalue = 10
for i in range(8):
    x = (((card % placevalue) - (card % (placevalue / 10))) / (placevalue / 10))
    checksum += x
    placevalue *= 100

# determine if valid
x = checksum % 10
if x == 0:
    # determine card comany
    placevalue = 10000000000000
    if ((card < (placevalue * 10)) and ((((card % placevalue) - (card % (placevalue / 10))) / (placevalue / 10)) == 4)):
        # 13 digit visa
        print("VISA")
    elif (((card < (placevalue * 100)) and ((((card % (placevalue * 100)) - (card % (placevalue * 10))) / (placevalue * 10)) == 3))
          and (((((card % (placevalue * 10)) - (card % placevalue)) / placevalue) == 4
                or (((card % (placevalue * 10)) - (card % placevalue)) / placevalue) == 7))):
        # 15 digit american express
        # starts with 34 of 37
        print("AMEX")
    elif card < (placevalue * 10000):
        # 16 digit
        placevalue = 10000000000000000
        if ((((card % placevalue) - (card % (placevalue / 10))) / (placevalue / 10)) == 4):
            print("VISA")
        elif (((((card % placevalue) - (card % (placevalue / 10))) / (placevalue / 10)) == 5)
              and ((((card % (placevalue / 10)) - (card % (placevalue / 100))) / (placevalue / 100)) >= 1
                   and ((((card % (placevalue / 10)) - (card % (placevalue / 100))) / (placevalue / 100)) <= 5))):
            # starts with 51-5
            print("MASTERCARD")
        else:
            print("INVALID")
    else:
        print("INVALID")
else:
    print("INVALID")