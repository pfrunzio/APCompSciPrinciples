//Paola Frunzio
//10.6.2020
//calculate salary

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    float hours, wage, salary, total;
    char married;
    int kids;
    total = 0.0;

    hours = get_float("How many hours did you work this week? ");
    wage = get_float("What is your hourly wage? ");

    //overtime
    // if (hours > 40)
    // {
    //     hours = hours - 40;
    //     salary = (40 * wage) + (hours * );
    // }
    
    salary = hours * wage;

    //deducted stuff
    married = get_char("Are you married?(y/n)");
    if (married == 'y' || married == 'Y')
    {
        total = salary - (0.25 * salary);
        kids = get_int("How many children do you have?");
        if (kids == 1 || kids == 3)
        {
            total = salary - (0.22 * salary);
        }
        else if (kids == 2)
        {
            total = salary - (0.2 * salary);
        }
        else if (kids > 3)
        {
            total = salary - (0.15 * salary);
        }
    }

    printf("Hours worked:%6.2f\nHourly Wage:%6.2f\nSalary:%6.2f\nTotal Pay:%6.2f\n", hours, wage, salary, total);
}