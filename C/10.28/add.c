//Paola Frunzio
//10.28.2020
//add two numbers with a function

#include <stdio.h>
#include <cs50.h>

int addNum();

int main(void)
{
    int sum;
    
    sum = addNum();
    
    printf("%i\n", sum);
}

int addNum()
{
    int num1, num2;
    num1 = get_int("Number: ");
    num2 = get_int("Number: ");
    return num1 + num2;
}