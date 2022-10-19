//Paola Frunzio
//10.23.2020
//fahrenheit but with a command line

#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Please enter the right command.\n");
        return 1;
    }

    float f;

    f = (atof(argv[1]) * 9 / 5) + 32;

    printf("F: %.1f\n", f);
}