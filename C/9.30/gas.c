//Paola Frunzio
//9.30.2020
//compute miles per gallon

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    float gallon, miles, mpg;

    miles = get_float("Miles traveled: ");
    gallon = get_float("Enter the gallons of gas: ");

    mpg = miles / gallon;

    printf("The miles per gallon is %.2f.\n", mpg);
}