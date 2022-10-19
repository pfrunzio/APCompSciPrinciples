//Paola Frunzio
//10.13.2020
//write a program using a loop to blast off

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    float balance, purchase;
    
    balance = get_float("Initial checking balance: ");
    while(balance > 0)
    {
        purchase = get_float("Cost of purchase: ");
        if (balance - purchase < 0)
        {
            printf("Sorry that's not in your budget.\n");
        }
        else
        {
            balance -= purchase;
            printf("Your balance is now %.2f.\n", balance);
        }
    }
    
    printf("You're out of money :(\n");
}