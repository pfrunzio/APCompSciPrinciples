//Paola Frunzio
//10.27.2020
//addition, subtraction, multiplication, division, and modulo from the command line

#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc != 4)
    {
        printf("Please enter the right command.\n");
        return 1;
    }

    int i;
    float a, b, result;

    //get a and b
    a = atof(argv[1]);
    b = atof(argv[3]);
    
    
    //operations
    if (argv[2][0] == '+')
    {
        result = a + b;
    }
    else if (argv[2][0] == '-')
    {
        result = a - b;
    }
    else if (argv[2][0] == 'x')
    {
        result = a * b;
    }
    else if (argv[2][0] == '/')
    {
        result = a / b;
    }
    else if (argv[2][0] == '%')
    {
        result = (int)(a / b);
        result = a - (b * result);
    }
    else
    {
        printf("Please enter the right command.\n");
        return 1;
    }

    printf("%.6f\n", result);
}