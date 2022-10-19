//Paola Frunzio
//11.10.2020
//check isbn number but with strings

#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

int main(void)
{
    int i, checksum = 0;
    float digit;

    string isbn = get_string("ISBN: ");
    for (i = 1; i < 11; i ++)
    {
        digit = atoi(isbn[i + 1]);
        checksum = digit * i;
        printf("%i\n", checksum);
    }
    if (checksum % 11 == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}