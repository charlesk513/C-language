#ifndef CALC_H
#define CALC_H

char operator;
double number1, number2;
int permission = 1;
double result;
int choice;

double sum(double number1, double number2);
double difference(double number1, double number2);
double product(double number1, double number2);
double quotient(double number1, double number2);
double modulus(int number1, int number2);

#endif