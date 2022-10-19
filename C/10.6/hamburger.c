//Paola Frunzio
//10.2.2020
//user can only order one hamburger/drink/fries. allows a customer to purchase any or all of the items.
//print out the total price, the amount of tax (using 6% for computation), the grand total price of the purchase as well as the price of each individual item.
//ask a series of Yes/No questions where the user will respond with y or n for their meal choices.

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    char hamburger, cheese, bacon, drink, sd, fries, sf;
    float price, tax, total;
    price = 0.0;
    tax = 0.0;

    printf("Hello! Welcome to the Fast Greasy Food Shop!\n");

    //hamburger
    hamburger = get_char("Would you like a hamburger?(y/n)\n");
    if (hamburger == 'y' || hamburger == 'Y')
    {
        price = price + 1.00;
        cheese = get_char("Would you like that with cheese?(y/n)\n");
        if (cheese == 'y' || cheese == 'Y')
        {
            price = price + .50;
        }
        bacon = get_char("Would you like that with bacon?(y/n)\n");
        if (bacon == 'y' || bacon == 'Y')
        {
            price = price + .70;
        }
    }
    else
    {
        cheese = 'n';
        bacon = 'n';
    }

    //drinks
    drink = get_char("Would you like a drink?(y/n)\n");
    if (drink == 'y' || drink == 'Y')
    {
        drink = get_char("Would you like a small or large?(s/l)\n");
        if (drink == 's' || drink == 'S')
        {
            price = price + 1.10;
        }
        else
        {
            price = price + 1.60;
        }
    }

    //fries
    fries = get_char("Would you like fries?(y/n)\n");
    if (fries == 'y' || fries == 'Y')
    {
        fries = get_char("Would you like a small or large?(s/l)\n");
        if (fries == 's' || fries == 'S')
        {
            price = price + 1.20;
        }
        else
        {
            price = price + 1.75;
        }
    }

    tax = price * 0.06;
    total = price + tax;

    //receipt
    printf("\nReceipt\n\n");
    if (hamburger == 'y' || hamburger == 'Y')
    {
        printf("Hamburger         1.00\n");
            if (cheese == 'y' || cheese == 'Y')
        {
            printf("Cheese            0.50\n");
        }
        if (bacon == 'y' || bacon == 'Y')
        {
            printf("Bacon             0.75\n");
        }
    }
    if (drink == 's' || drink == 'S')
    {
        printf("Small Drink       1.10\n");
    }
    if (drink == 'l' || drink == 'L')
    {
        printf("Large Drink       1.60\n");
    }
    if (fries == 's' || fries == 'S')
    {
        printf("Small Fries       1.20\n");
    }
    if (fries == 'l' || fries == 'L')
    {
        printf("Large Fries       1.75\n");
    }
    //totals
    printf("\nTotal            $%.2f\n", price);
    printf("Tax              $%.2f\n", tax);
    printf("Total            $%.2f\n", total);
}