//Paola Frunzio
//9.30.2020
//enter price and tax rate. output og price, tax rate, and total cost.

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    float price, taxRate, total;

    price = get_float("Enter the price of the item before tax:");
    taxRate = get_float("Enter the tax rate:");

    total = price * (taxRate / 100 + 1);

    printf("Original: $%10.2f\nTax Rate: $%10.2f\nTotal:    $%10.2f\n", price, taxRate, total);
}