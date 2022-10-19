//Paola Frunzio
//10.28.2020
//add two numbers with a function

#include <stdio.h>
#include <cs50.h>

float tax(float x, float tax);

int main(void)
{
    float cost, total, taxRate;
    
    cost = get_float("Cost: ");
    taxRate = get_float("Tax Rate: ");
    
    total = tax(cost, taxRate);
    
    printf("The total is %.2f\n", total);
    return 0;
}

float tax(float x, float tax) //computes the total with tax
{
    return x * (1 + tax);
}