//Paola Frunzio
//10.20.2020
//get three grades per person and output names and averages

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name[3];
    float average[3] = {0};
    int i, x, grade;

    for (i = 0; i < 3; i ++)
    {
        name[i] = get_string("Student name: ");
        for (x = 0; x < 3; x ++)
        {
            grade = get_int("Grade: ");
            average[i] += grade;
        }
        average[i] /= 3;
    }

    for (i = 0; i < 3; i ++)
    {
        printf("%s has a grade average of %.2f.\n", name[i], average[i]);
    }
}
