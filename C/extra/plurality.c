//Paola Frunzio
//11.18.2020
//first pass the post voting system

#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc > 9)
    {
        printf("Max is 9\n");
        return 1;
    }

    int votes, i, j, candidates;
    candidates = strlen(argv);

    votes = get_int("Number of voters: ");

    for (i = 0; i <= votes; i ++)
    {
        string vote = get_string("Vote: ");
        for (j = 0; j < candidates; j ++)
        if (vote != argv[j])
        {
            printf("Invalid vote.");
        }
    }

}