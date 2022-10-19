# Paola Frunzio
# 1.15.2021
# find max of three numbers

from sys import argv

def main():
    if len(argv) < 4:
        print("Invalid input")
        exit(1)
    max = findMax(int(argv[1]), int(argv[2]), int(argv[3]))
    print(f"The largest of those numbers is {max}.")

def findMax(num1, num2, num3):
    # return max(num1, num2, num3)
    if (num1 >= num2) and (num1 >= num3):
        return num1
    elif num2 >= num3:
        return num2
    else:
        return num3

if __name__ == "__main__":
    main()