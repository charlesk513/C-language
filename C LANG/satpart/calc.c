#include <stdio.h>
#include <stdbool.h>
#include "calc.h"

double sum(double number1, double number2)
{
    return number1 + number2;
}
double difference(double number1, double number2)
{
    return number1 - number2;
}
double product(double number1, double number2)
{
    return number1 * number2;
}
double quotient(double number1, double number2)
{
    return number1 / number2;
}
double modulus(int number1, int number2)
{
    if (number2 == 0)
    {
        printf("Be serious, modulus by zero,");
        exit(0);
    }
    else
    {
        return number1 % number2;
    }
}