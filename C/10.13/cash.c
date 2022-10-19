//Paola Frunzio
//10.9-13.2020
//asks the user how much change is owed and then outputs the minimum number of coins with which said change can be made

#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float change = -0.1;
    float cash;
    int q, d, n, p, coins;
    //quarters (25¢), dimes (10¢), nickels (5¢), and pennies (1¢)

    while (change < 0)
    {
        change = get_float("Change owed: ");
    }

    cash = change * 100;
    cash = round(cash);
    printf("cash=%f\n", cash);
    printf("change=%f\n", change);

    q = cash / 25;
    cash -= (q * 25);

    d = cash / 10;

    cash -= (d * 10);

    n = cash / 5;

    p = cash - (n * 5);

    coins = q + d + n + p;
    printf("q=%i\n", q);
    printf("d=%i\n", d);
    printf("n=%i\n", n);
    printf("p=%i\n", p);
    printf("%i\n", coins);

}