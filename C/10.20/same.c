//Paola Frunzio
//10.20.2020
//tell user if the numbers are same or different

#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string x, y;
    int length1, length2, i;
    bool same = true;

    x = get_string("Word: ");
    y = get_string("Word: ");

    length1 = strlen(x);
    length2 = strlen(y);
    if (length1 == length2)
    {
        for (i = 0; i < length1; i ++)
        {
           if (!(x[i] == y[i]))
           {
               same = false;
           }
        }
    }
    else
    {
        same = false;
    }

    if (same = true)
    {
        printf("They are equal\n");
    }
    else
    {
        printf("They are not equal\n");
    ]

    // if (x == y)
    // {
    //     printf("They are the same\n");
    // }
    // else
    // {
    //     printf("They are the different\n");
    // }
}