//Paola Frunzio
//9.30.2020
//make the hashtags appear in a pyramid based on a height input

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height, row, x;
    row = 1;

    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 | height > 8);

    do
    {
        //left spaces
        x = height - row - 1;
        if (x > -1)
        {
            do
            {
                printf(" ");
                x --;
            }
            while (x > -1);
        }

        //left #
        x = 1;
        do
        {
            printf("#");
            x ++;
        }
        while (x <= row);

        //middle spaces
        printf("  ");

        //right #
        x = 1;
        do
        {
            printf("#");
            x ++;
        }
        while (x <= row);

        printf("\n");
        row ++;
    }
    while (row <= height);
}