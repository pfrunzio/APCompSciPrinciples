//Paola Frunzio
//10.21.2020
//add two floats

#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc < 3)
        {
            printf("Please enter two numbers.\n");
            return 1;
        }

    float sum, num1, num2;
    num1 = atof(argv[1]);
    num2 = atof(argv[2]);

    sum = num1 + num2;

    printf("The sum of %.2f and %.2f is %.2f.\n", num1, num2, sum);
}