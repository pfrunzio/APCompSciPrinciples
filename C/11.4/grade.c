//Paola Frunzio
//11.4.2020
//compute the final grade

#include <stdio.h>
#include <cs50.h>
#include <string.h>

float grade(int max);

int main(void)
{
    float totalAverage = 0;

    totalAverage += grade(get_int("How many homeworks were there?"));
    totalAverage += grade(get_int("How many labs were there?"));
    totalAverage += grade(get_int("How many tests were there?"));
    totalAverage /= 3;

    printf("This student's final grade is %.2f.\n", totalAverage);
}

float grade(int max)
{
    int i;
    float average = 0;

    for (i = 0; i < max; i ++)
    {
        average += get_float("Enter grade: ");
    }
    average /= max;
    return average;
}