//Paola Frunzio
//10.30.2020
//get a name

#include <stdio.h>
#include <cs50.h>

void getName();

int main(void)
{
    getName();
    return 0;
}

void getName()
{
    string name = get_string("Name: ");
    printf("%s\n", name);
    return;
}