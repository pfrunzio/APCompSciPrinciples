# Paola Frunzio
# 1.8.2021
# fizzbuzz

for i in range(1,99):
    if ((i % 3 == 0) & (i % 5 == 0)):
        print("fizzbuzz")
    elif i % 5 == 0:
        print("buzz")
    elif i % 3 == 0:
        print("fizz")
    else:
        print("-")

