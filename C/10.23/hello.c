//Paola Frunzio
//10.23.2020
//hello but with a command line

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
    printf("Hello, %s!\n", argv[1]);
}