//Paola Frunzio
//10.2.2020
//if grade is below 70, let's the student know they are failing

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int grade;
    char sport;
    
    grade = get_int("Enter your grade: ");
    
    if (grade < 70)
    {
        sport = get_char("Are you an athlete? (y/n)");
        if (sport=='y'||sport=='Y')
    	    {
    	        printf("Please see your coach ASAP!\n");
    	    }
    	
        printf("You are in danger of failing.\n");
        printf("Please see me.\n");
    }
    else
    {
        printf("You are passing the course.\n");
    }
}