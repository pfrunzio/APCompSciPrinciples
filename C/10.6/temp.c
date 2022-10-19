//Paola Frunzio
//10.6.2020
//decide the activity based on the temperature

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int temp;
    char rain;

    temp = get_int("Enter the temperature: ");

    if (temp >= 70)
    {
        rain = get_char("Is it raining?(y/n)");
        if (rain == 'y' || rain == 'Y')
        {
            printf("Stay in and read a book.\n");
        }
        else
        {
            printf("Go to the beach.\n");
        }
    }
    else if (temp >= 30)
    {
        printf("Stay in and study.");
    }
    else
    {
        printf("Go skiing.\n");
    }
}