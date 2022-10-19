# Paola Frunzio
# 1.12.2021
# compare lists

list1 = ['a', 'b', 'c', 'd', 'e', 'f', 'g']
list2 = ['a', 'crocodile', 'cried', 'last', 'night']

match = False

for i in list1:
    if i in list2:
        match = True
        break

if match == True:
    print("true")
else:
    print("no match")
