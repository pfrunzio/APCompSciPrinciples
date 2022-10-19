//Paola Frunzio
//10.7.2020
//add every even number from 1-20

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int i, start, end;
    int total = 0;
    
    start = get_int("Start Number: ");
    end = get_int("End Number: ");
    
    if (start > end)
    {
        i = start;
        start = end;
        end = i;
    }
    
    for (i = start; i <= end; i += 3)
    {
        total += i;
    }
    
    printf("The sum of every third number from %i to %i is %i.\n", start, end, total);
}