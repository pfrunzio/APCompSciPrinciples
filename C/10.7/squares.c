//Paola Frunzio
//10.7.2020
//square a number 5 times

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int i;
    long num, square;
    
    num = get_long("Number: ");
    
    for(i = 0;i < 5; i ++)
    {
        square = num * num;
        printf("The square of %li is %li.\n", num, square);
        num = square;
    }
}
