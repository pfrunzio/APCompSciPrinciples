//Paola Frunzio
//9.25.2020
//ask the user for a radius of a circle and output area and circumferece

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    float radius, pi, area, circumference;
    pi = 3.1415;

    radius = get_float("Enter the radius of the circle: ");
    circumference = 2 * pi * radius;
    area = pi * radius * radius;
    
    printf("A circle with a radius of %.2f has a circumference of %.2f and an area of %.2f.\n", radius, circumference, area);
}