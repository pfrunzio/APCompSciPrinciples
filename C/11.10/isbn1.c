//Paola Frunzio
//11.5.2020
//check isbn number

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    long isbn, placevalue = 10000000000;
    int i, checksum = 0;

    isbn = get_long("ISBN: ");
    for (i = 1; i < 11; i ++)
    {
        checksum += ((isbn % placevalue) - (isbn % (placevalue / 10))) / (placevalue / 10) * i;
        placevalue /= 10;
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