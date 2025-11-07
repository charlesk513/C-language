#ifndef CALCULATOR_H
#define CALCULATOR_H

#define M_PI 3.14159265358979323846
char operator;
float num1, num2;
int permission = 1;
int choice;
float result;

float sum(float num1, float num2);
float difference(float num1, float num2);
float product(float num1, float num2);
float quotient(float num1, float num2);
int modulus(int num1, int num2);
float squareroot(int num1);
float sin(int num1);
float cos(int num1);
float tan(int num1);
#endif