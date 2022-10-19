//Paola Frunzio
//10.16.2020
//input ten numbers then output them in reverse order

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int i, num[10];

    for(i = 0; i < 10; i ++)
    {
        num[i] = get_int("Number: ");
    }

    for(i = 9; i >= 0; i --)
    {
        printf("%i", num[i]);
    }
}