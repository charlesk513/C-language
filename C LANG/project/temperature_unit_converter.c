#include <stdio.h>
#include <stdbool.h>

int choice;
double temperature, result;

int main()
{
    printf("\nThe temperature converter\n\n");
    while (1)
    {
        printf("\n\nConversion options\n");
        printf("1. Convert Celsius to Fahrenheit.");
        printf("\n2. Convert Fahrenheit to Celsius.");

        printf("\nEnter choice 1 or 2: ");
        scanf("%d", &choice);

        printf("\nEnter the temperature to convert: ");
        scanf("%lf", &temperature);

        switch (choice)
        {
        case 1:
            result = (temperature * (9.0 / 5.0)) + 32.0;
            printf("\nThe temperature %.2lfC is %.2lfF", temperature, result);
            break;
        case 2:
            result = (temperature - 32.0) * (5.0 / 9.0);
            printf("\nThe temperature %.2lf F is %.2lf C", temperature, result);
            break;
        default:
            printf("Option entered is not among options!");
            break;
        }
    }
    return 0;
}