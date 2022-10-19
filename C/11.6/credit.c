//Paola Frunzio
//10.1-6.2020
//determine whether a credit card number is valid and what company it is from

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    long card, placevalue, y;
    int x, d, i, checksum;

    //get number
    card = get_long("Number: ");

    //determine if valid
    //get checksum
    checksum = 0;
    placevalue = 100;
    for (i = 0; i < 8; i ++)
    {
        x = ((((card % placevalue) - (card % (placevalue / 10))) / (placevalue / 10)) * 2);
        checksum = checksum + ((x % 100) - (x % 10)) / 10;
        checksum = checksum + (x % 10);
        placevalue = placevalue * 100;
    }
    placevalue = 10;
    for (i = 0; i < 8; i ++)
    {
        x = (((card % placevalue) - (card % (placevalue / 10))) / (placevalue / 10));
        checksum = checksum + x;
        placevalue = placevalue * 100;
    }
    //determine if valid
    x = checksum % 10;
    if (x == 0)
    {
        //determine the company
        //find card length
        placevalue = 10000000000000;
        if ((card < (placevalue * 10)) && ((((card % placevalue) - (card % (placevalue / 10))) / (placevalue / 10)) == 4))
        {
            //13 digit visa
            printf("VISA\n");
        }
        else if (((card < (placevalue * 100)) && ((((card % (placevalue * 100)) - (card % (placevalue * 10))) / (placevalue * 10)) == 3))
                 && (((((card % (placevalue * 10)) - (card % placevalue)) / placevalue) == 4
                      || (((card % (placevalue * 10)) - (card % placevalue)) / placevalue) == 7)))
        {
            //15 digit american express
            //starts with 34 or 37
            printf("AMEX\n");
        }
        else if (card < (placevalue * 10000))
        {
            placevalue = 10000000000000000;
            //16 digit
            if ((((card % placevalue) - (card % (placevalue / 10))) / (placevalue / 10)) == 4)
            {
                printf("VISA\n");
            }
            else if (((((card % placevalue) - (card % (placevalue / 10))) / (placevalue / 10)) == 5)
                     && ((((card % (placevalue / 10)) - (card % (placevalue / 100))) / (placevalue / 100)) >= 1
                         && ((((card % (placevalue / 10)) - (card % (placevalue / 100))) / (placevalue / 100)) <= 5)))
            {
                //starts with 51-5
                printf("MASTERCARD\n");
            }
            else
            {
                printf("INVALID\n");
            }
        }
    }
    else
    {
        printf("INVALID\n");
    }
}