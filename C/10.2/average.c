//Paola Frunzio
//10.2.2020
//average of three grades

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int gOne, gTwo, gThree;
    float average;
    
    gOne = get_int("Enter your first grade: ");
    gTwo = get_int("Enter your second grade: ");
    gThree = get_int("Enter your third grade: ");
    
    average = (gOne + gTwo + gThree) / 3.0;
    
    printf("The average of the three grades %i, %i, and %i is %f.\n", gOne, gTwo, gThree, average);
}