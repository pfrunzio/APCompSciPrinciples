//Paola Frunzio
//10.27.2020
//reading difficulty

#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void)
{
    int length, i;
    int letters = 0;
    int spaces = 0; 
    int punctuation = 0;
    double index;

    //get text
    string str = get_string("Text: ");
    length = strlen(str);
    
    //count letters, spaces, and punctuation
    for (i = 1; i <= length; i ++)
    {
        if (isalpha(str[i]) != 0)
        {
            letters ++;
        }
        if (isspace(str[i]) != 0)
        {
            spaces ++;
        }
        if ((str[i] == '.') || (str[i] == '!') || (str[i] == '?'))
        {
            punctuation ++;
        }
    }
    letters ++;
    spaces ++;
    
    //calculate index
    index = (0.0588 * letters / spaces * 100);
    index = index - (0.296 * punctuation / spaces * 100);
    index -= 15.8;
    

    //printf("%i letter(s)\n%i word(s)\n%i sentence(s)\n", letters, spaces, punctuation);
    if (round(index) < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (round(index) > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %.0f\n", round(index));
    }
}