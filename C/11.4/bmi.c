//Paola Frunzio
//11.5.2020
//bmi, inches to centimeters, and pounds to kilograms functions

#include <stdio.h>
#include <cs50.h>
#include <string.h>

float toCentimeters(float inches);
float toKilograms(float pounds);
float calculateBMI(float cm, float kg);

int main(void)
{
    float height, weight, bmi;
    char type;

    //get height
    height = get_float("Enter the height: ");
    type = get_char("Is this value in a) inches or b) centimeters?");
    if (type == 'a')
    {
        height = toCentimeters(height);
    }

    //get weight
    weight = get_float("Enter the weight: ");
    type = get_char("Is this value in a) pounds or b) kilograms?");
    if (type == 'a')
    {
        weight = toKilograms(weight);
    }

    //get BMI
    bmi = calculateBMI(height, weight);

    printf("The BMI is %.2f.\n", bmi);
}

float toCentimeters(float inches)
{
    return inches * 2.54;
}
float toKilograms(float pounds)
{
    return pounds / 2.205;
}

float calculateBMI(float cm, float kg)
{
    cm /= 100;
    return kg / (cm * cm);
}