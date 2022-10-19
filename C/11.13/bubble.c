//Paola Frunzio and Chris Takoudes
//11.13-17.2020
//bubble sort algorithm

#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main (void)
{
    int itemNum, i, sort, j, unsorted;

    //getting items
    itemNum = get_int("How many items do you have to sort?\n");
    unsorted = itemNum;
    int item[itemNum];

    for (i = 0; i < itemNum; i ++)
    {
        item[i] = get_int("Enter number: ");
    }

    //sorting algorithm
    sort = -1;

    while (sort != 0)
    {
        sort = 0;

        //sorting
        for (i = 0; i < unsorted - 1; i ++)
        {
            //check for swap
            if (item[i] > item[i + 1])
            {
                j = item[i];
                item[i] = item[i + 1];
                item[i + 1] = j;
                sort ++;
            }
        }

        //lock in sorted numbers
        unsorted --;
    }

    for (i = 0; i < itemNum; i ++)
    {
        printf("%i, ", item[i]);
    }

    printf("\n");

    return 0;
}
