# Paola Frunzio
# 1.15.2021
# reverse a string

from cs50 import get_string

def reverse(string):
    new = []
    for i in range(len(string)-1, -1, -1):
        new += string[i]
    return new

sentence = get_string("Enter a sentence: ")
newSentence = [reverse(sentence)]
print(sentence)
