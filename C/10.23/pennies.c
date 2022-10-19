//Paola Frunzio
//10.23.2020
//exponential pennies

#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, string argv[])
{
    if (argc != 3)
    {
        printf("Please enter the right command.\n");
        return 1;
    }

    int pennies, days, i;
    int total = 0;

    days = atof(argv[1]);
    pennies = atof(argv[2]);

    if (days < 28 || days > 31)
    {
        printf("Please enter the right command.\n");
        return 1;
    }
    if (pennies < 1)
    {
        printf("Please enter the right command.\n");
        return 1;
    }

    for (i = 0; i < days; i++)
    {
    	total += pennies;
    	pennies *= 2;
    }

    double dollars = (double)total / 100;

    printf("$%.2f\n", dollars);
}