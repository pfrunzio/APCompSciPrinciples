//Paola Frunzio
//9.30.2020
//input euros output dollars

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    float euros, dollars, conversionRate;
    conversionRate = 1.17;
    
    euros = get_float("Enter an amount in Euros:");
    
    dollars = euros * conversionRate;
    
    printf("The equivalent of €%.2f is $%.2f.\n", euros, dollars);
}