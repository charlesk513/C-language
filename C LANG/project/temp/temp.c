#include "temp.h"

double Fahrenheit(double temperature)
{
    return (temperature * (9.0 / 5.0)) + 32.0;
}
double Celsius(double temperature)
{
    return (temperature - 32.0) * (5.0 / 9.0);
}