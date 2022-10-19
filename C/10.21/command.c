//Paola Frunzio
//10.21.2020
//output all the commands

#include <stdio.h>
#include <cs50.h>

int main(int argc, string argv[])
{
    if (argc < 2)
    {
        printf("Please enter a command.\n");
        return 1;
    }
    
    int i;
    
    for (i = 1; i < argc; i ++)
    {
        printf("%s\n", argv[i]);
    }
    return 0;
}