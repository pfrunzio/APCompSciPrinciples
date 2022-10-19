//Paola Frunzio
//9.30.2020
//compute celsius to fahrenheit

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    float c, f;
    
    c = get_float("Enter temperature in degrees celsius: ");
    
    f = (c * 9 / 5) + 32;
    
    printf("%.1f°C is equal to %.1f°F\n", c, f);
}