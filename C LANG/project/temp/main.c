#include <stdio.h>
#include <stdbool.h>

#include "temp.h"
#include "temp.c"
int main()
{
    printf("\nThe temperature converter\n\n");
    printf("Conversion options\n");
    printf("\n1. Convert Celsius to Fahrenheit.");
    printf("\n2. Convert Fahrenheit to Celsius.");

    printf("\nEnter choice 1 or 2: ");
    scanf("%d", &choice);

    printf("\nEnter the temperature to convert: ");
    scanf("%lf", &temperature);

    switch (choice)
    {
    case 1:
        Fahrenheit(temperature);
        break;

    case 2:
        Celsius(temperature);
        break;

    default:
        printf("Option entered is not among options!");
        break;
    }

    return 0;
}