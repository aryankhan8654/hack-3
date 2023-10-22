#include <stdio.h>

int main()
{
    float total_GB, curr_day, Gb_used;

       printf("Enter the total GB in the plan per 30 day period: ");
    scanf("%f", &total_GB);

   
   
    if (total_GB <= 0)
    {
        printf("Total GB must be greater than 0. Please enter a valid value.\n");
        return 1;
    }

    printf("Enter the current day in the 30 day period (1-30): ");
    scanf("%f", &curr_day);