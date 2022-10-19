//Paola Frunzio
//10.9.2020
//user keeps entering number until they guess your number. tell them high or low

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int guess = 0;
    int num = 56;
    guess = get_int("Number: ");
    
    while (guess != num)
    {
        if (guess < num)
        {
            printf("Higher\n");
        }
        else
        {
            printf("Lower\n");
        }
        guess = get_int("Number: ");
    }
    printf("You got it!");
}