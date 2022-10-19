//Paola Frunzio
//10.13.2020
//write a program using a loop to blast off

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("Blast off in...\n");

    int i;
    for (i = 10; i > 0; i --)
    {
        printf("%i\n", i);
    }

    printf("Blast off!\n");
}