//Paola Frunzio
//10.30.2020
//compute absolute value

#include <stdio.h>
#include <cs50.h>

void absoluteValue();

int main(void)
{
    absoluteValue();
    return 0;
}

void absoluteValue()
{
    int num = get_int("Number: ");
    if (num < 0)
    {
        num = num * -1;
    }

    printf("Absolute Value: %i\n", num);
    return;
}