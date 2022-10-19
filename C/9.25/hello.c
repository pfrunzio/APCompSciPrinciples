//Paola Frunzio
//9.22-25.2020
//First Program in C

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x;
    int y;
    int z;

    x = get_int("Enter your first number: ");
    y = get_int("Enter your second number: ");
    z = x + y;
    printf("The sum of %i and %i is %i.\n", x, y, z);
}