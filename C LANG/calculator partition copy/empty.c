#include <stdio.h>
#include <stdbool.h>

#include "calculator.h"
#include "calculator.c"
#include <math.h>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

int main()
{
    double result;
    printf("\n====Simple Calculator====\n");
    printf("\nOPERATIONS\n");
    printf("\n1. Addition (+)");
    printf("\n2. Subtraction (-)");
    printf("\n3. Multiplication (*)");
    printf("\n4. Division  (/)");
    printf("\n5. Modulus (%%)");
    printf("\nUnary operations:");
    printf("\n s or S : sine (degrees)");
    printf("\n c or C : cosine (degrees)");
    printf("\n t or T : tangent (degrees)");
    printf("\n r or R : square root\n");
    while (1)
    {
        if (permission)
        {
            printf("\nEnter the operator among ['+', '-', '*', '/', '%%', 's','c','t','r']: ");
            scanf(" %c", &operator);

            if (operator == '+' || operator == '-' || operator == '*' || operator == '/' || operator == '%' ||
                operator == 's' || operator == 'S' || operator == 'c' || operator == 'C' ||
                operator == 't' || operator == 'T' || operator == 'r' || operator == 'R')
            {
                // valid operator
            }
            else
            {
                printf("Syntax error, value entered not an operator\n");
                while (getchar() != '\n')
                    ;
                continue; // restart the loop
            }

            // unary operators need only one operand
            if (operator == 's' || operator == 'S' || operator == 'c' || operator == 'C' ||
                operator == 't' || operator == 'T' || operator == 'r' || operator == 'R')
            {
                printf("\nEnter the number: ");
                if (scanf("%f", &num1) != 1)
                {
                    printf("Syntax error, value entered not a number\n");
                    while (getchar() != '\n')
                        ;
                    continue;
                }
            }
            else
            {
                printf("\nEnter the first number; ");
                if (scanf("%f", &num1) != 1)
                { // clear the invalid response
                    printf("Syntax error, value entered not a number\n");
                    while (getchar() != '\n')
                        ;
                    continue; // restart the loop
                }

                printf("\nEnter the second number; ");
                if (scanf("%f", &num2) != 1)
                { // clear the invalid  response
                    printf("\nSyntax error, value entered not a number\n");
                    while (getchar() != '\n')
                        ;
                    continue; // restart the loop
                }
            }
        }
        else
        {
            num1 = result;
            printf("\nThe stored value is %.3f\n", num1);
            printf("\nEnter the operator among ['+', '-', '*', '/', '%%', 's','c','t','r']: ");
            scanf(" %c", &operator);
            if (operator == '+' || operator == '-' || operator == '*' || operator == '/' || operator == '%' ||
                operator == 's' || operator == 'S' || operator == 'c' || operator == 'C' ||
                operator == 't' || operator == 'T' || operator == 'r' || operator == 'R')
            {
                // valid operator
            }
            else
            {
                printf("Syntax error, value entered not an operator\n");
                while (getchar() != '\n')
                    ;
                continue; // restart the loop
            }

            if (operator == 's' || operator == 'S' || operator == 'c' || operator == 'C' ||
                operator == 't' || operator == 'T' || operator == 'r' || operator == 'R')
            {
                // only need the stored value (num1) or a new single number
                if (operator == 'r' || operator == 'R')
                {
                    // allow the user to enter a different number for sqrt if desired
                    printf("\nEnter the number (or press Enter to use stored value): ");
                    int res = getchar();
                    if (res == '\n')
                    {
                        // keep num1 as result
                    }
                    else
                    {
                        ungetc(res, stdin);
                        if (scanf("%f", &num1) != 1)
                        {
                            printf("\nSyntax error, value entered not a number\n");
                            while (getchar() != '\n')
                                ;
                            continue;
                        }
                    }
                }
                else
                {
                    // trig fn: allow entering new angle or use stored value
                    printf("\nEnter the angle in degrees (or press Enter to use stored value): ");
                    int res = getchar();
                    if (res == '\n')
                    {
                        // keep num1
                    }
                    else
                    {
                        ungetc(res, stdin);
                        if (scanf("%f", &num1) != 1)
                        {
                            printf("\nSyntax error, value entered not a number\n");
                            while (getchar() != '\n')
                                ;
                            continue;
                        }
                    }
                }
            }
            else
            {
                printf("\nEnter the number; ");
                if (scanf("%f", &num2) != 1)
                { // clear the invalid response
                    printf("\nSyntax error, value entered not a number\n");
                    while (getchar() != '\n')
                        ;
                    continue; // restart the loop
                }
            }
        }
        // the switch coditions govern the operator to be used, it calls functions from the source file
        switch (operator)
        {
        case '+':
            result = sum(num1, num2);
            printf("\nThe operation %.1f + %.1f = %.3f", num1, num2, result);
            break;

        case '-':
            result = difference(num1, num2);
            printf("\nThe operation %.1f - %.1f = %.3f", num1, num2, result);
            break;
        case '*':
            result = product(num1, num2);
            printf("\nThe operation %.1f * %.1f = %.3f", num1, num2, result);
            break;

        case '/':
            if (num2 == 0)
            {
                printf("\nError! Division by zero.");
            }
            else
            {
                result = quotient(num1, num2);
                printf("\nThe operation %.1f / %.1f = %.3f", num1, num2, result);
            }
            break;
        case '%':
            result = modulus((int)num1, (int)num2);
            printf("\nThe operation %.1lf %% %.1lf = %.3lf", num1, num2, result);
            break;

        case 's':
        case 'S':
        {
            float radians = (float)num1 * (float)M_PI / 180.0f;
            result = sinf(radians);
            printf("\nsin(%.3f deg) = %.6f", num1, result);
            break;
        }
        case 'c':
        case 'C':
        {
            float radians = (float)num1 * (float)M_PI / 180.0f;
            result = cosf(radians);
            printf("\ncos(%.3f deg) = %.6f", num1, result);
            break;
        }
        case 't':
        case 'T':
        {
            float radians = (float)num1 * (float)M_PI / 180.0f;
            // check for cos ~ 0 to avoid huge values
            if (fabsf(cosf(radians)) < 1e-7f)
            {
                printf("\nError! tangent undefined for this angle (cos ~ 0).");
            }
            else
            {
                result = tanf(radians);
                printf("\ntan(%.3f deg) = %.6f", num1, result);
            }
            break;
        }
        case 'r':
        case 'R':
            if (num1 < 0)
            {
                printf("\nError! cannot take square root of a negative number.");
            }
            else
            {
                result = sqrtf(num1);
                printf("\nsqrt(%.3f) = %.6f", num1, result);
            }
            break;

        // operator doesn't match any case constant +, -, *, /
        default:
            printf("\nError! operator is not correct");
            break;
        }
        // permission to go on for a new or former calculation
        printf("\n\nOPERATIONS");
        printf("\n1. New operation");
        printf("\n2. Continue with the last answer\n\n");
        printf("Enter the option you want among (1,2): ");
        scanf("%d", &choice);
        // This operation updates the value of the permission variable to manage the type of operation for the next loop
        if (choice == 1)
        {
            permission = 1;
        }
        else if (choice == 2) // this option updates variable permission to 0 which is false in booleans hence execution of the else part in the first if condition
        {
            permission = 0;
        }
        else
        { // This statement breaks the loop when the choice entered is neither 1 nor 2
            printf("\nOption entered not among\n");
            break;
        }
    }
    printf("\nThank you for collaborating with BCS_GRP_6, we appreciate! \n");
    return 0;
}