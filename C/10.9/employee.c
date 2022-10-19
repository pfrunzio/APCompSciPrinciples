//Paola Frunzio
//10.9.2020
//give hourly wage for employees

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int ID;
    float hours, wage, payroll;
    ID = get_int("Employee ID: ");

    while(ID != 0)
    {
        hours = get_int("Hours worked: ");
        wage = get_float("Hourly wage: ");
        payroll = hours * wage;

        printf("Employee %i earned %.2f.\n", ID, payroll);

        ID = get_int("Employee ID: ");
    }

}