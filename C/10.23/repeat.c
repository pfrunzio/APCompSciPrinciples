//Paola Frunzio
//10.23.2020
//read number and word from command. output word number of times

#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc < 3)
    {
        printf("Please enter a command.\n");
        return 1;
    }
    // if (isalpha(argv[1]) == 0)
    // {
    //     printf("The second command should be a number.\n");
    //     return 1;
    // }
    // if (isalpha(argv[2]) != 0)
    // {
    //     printf("The third command should be a word.\n");
    //     return 1;
    // }

    int times = atof(argv[1]);
    int i;

    for (i = 0; i < times; i ++)
    {
        printf("%s\n", argv[2]);
    }
}