//Paola Frunzio
//10.30.2020
//compute absolute value

#include <stdio.h>
#include <cs50.h>
#include <string.h>

int score(int goals, char snitch);

int main(void)
{
    int scores, result;
    char caught;
    scores = get_int("Number of goals: ");
    caught = get_char("Did you catch the snitch?(y/n)");
    
    result = score(scores, caught);
    
    printf("Final score: %i\n", result);
    return 0;
}

int score(int goals, char snitch)
{
    int total;
    
    total = goals * 10;
    if (snitch == 'y')
    {
        total += 150;
    }
    return total;
}