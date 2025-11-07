#include <math.h>
#ifndef CALCULATOR_H
#define CALCULATOR_H

int permission = 1;
char operatorChar[5] = {'+', '-', '/', '%', '*'};

float mod;
int div;
char operator;
float number;
float num1, num2;
float number1, number2;
int choice, calc_type;
int trig, desire, root;
float result;
float modulus;

float sum(float num1, float num2);
float difference(float num1, float num2);
float product(float num1, float num2);
float quotient(float num1, float num2);
int modulus(int num1, int num2);
double sin(double number);
double cos(double number);
double tan(double number);
float power(float number1, float number2);
double squareroot(double number);
double cuberoot(double number);
int factor(int number);

#endif