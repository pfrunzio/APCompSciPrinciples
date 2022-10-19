//Paola Frunzio
//10.13.2020
//enter 10 numbers. output the sum of the evens

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int num, i;
    int sum = 0;

    for(i = 0; i < 10; i ++)
    {
        num = get_int("Number: ");
        if (num % 2 == 0)
        {
            sum += num;
        }
    }

    printf("The sum of the even numbers you input is %i.\n", sum);
}