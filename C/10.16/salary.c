//Paola Frunzio
//10.16.2020
//give hourly wage for employees

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int ID[5]={0};
    float hours[5];
    float wage[5], salary[5];
    int i;

    for(i = 0; i < 4; i ++)
    {
        ID[i] = get_int("Employee ID: ");
        hours[i] = get_int("Hours worked: ");
        wage[i] = get_float("Hourly wage: ");
    }

    for(i = 0; i < 4; i ++)
    {
        salary = hours[i] * wage[i];
        printf("Employee %i worked %.2f hours for $%.2f an hour and earned $%.2f.\n", ID[i], hours[i], wage[i], salary);
    }
}