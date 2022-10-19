//Paola Frunzio
//10.2.2020
//input number. output odd or even

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int number;
    
    number = get_int("Enter the number: ");
    
    number = number % 2;
    
    if (number == 1)
    {
        printf("odd\n");
    }
    else if (number == 0)
    {
        printf("even\n");
    }
    else {printf("broken\n");}
}