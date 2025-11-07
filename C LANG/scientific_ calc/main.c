#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#include "scientific.h"
#include "scientific.c"

int main()
{
    printf("\n====Simple Calculator====\n");
    printf("\nOPERATIONS\n");
    printf("\n1. Addition (+)");
    printf("\n2. Subtraction (-)");
    printf("\n3. Multiplication (*)");
    printf("\n4. Division  (/)");
    printf("\n5. Modulus (%%)\n");
    while (1)
    {
        printf("\nADVANCEMENTS\n");
        printf("\n1.Normal arithmetic operations");
        printf("\n2.Scientific operations\n");
        printf("\nEnter the operation (1/2): ");
        scanf("%d", &calc_type);
        if (calc_type == 1)
        {
            // go on please!
            if (permission)
            {
                printf("\nEnter the operator among [\'+\', \'-\', \'*\', \'/\', \'%%\']: ");
                scanf(" %c", &operator);
                if (operator == '+' || operator == '-' || operator == '*' || operator == '/' || operator == '%')
                {
                    // valid operator, do nothing and continue
                }
                else
                {
                    printf("Sythax error, value entered not an operator\n");
                    while (getchar() != '\n')
                        ;
                    continue; // restart the loop
                }

                printf("\nEnter the first number; ");
                if (scanf("%f", &num1) != 1)
                { // clear the invalid response
                    printf("Sythax error, value entered not a number\n");
                    while (getchar() != '\n')
                        ;
                    continue; // restart the loop
                }

                printf("\nEnter the second number; ");
                if (scanf("%f", &num2) != 1)
                { // clear the invalid  response
                    printf("\nSythax error, value entered not a number\n");
                    while (getchar() != '\n')
                        ;
                    continue; // restart the loop
                }
            }
            else
            {
                num1 = result;
                printf("\nThe stored value is %.3f\n", num1);
                printf("\nEnter the operator among [\'+\', \'-\', \'*\', \'/\', \'%%\']: ");
                scanf("%s", &operator);
                if (operator == '+' || operator == '-' || operator == '*' || operator == '/' || operator == '%')
                {
                    // valid operator, do nothing and continue
                }
                else
                {
                    printf("Sythax error, value entered not an operator\n");
                    while (getchar() != '\n')
                        ;
                    continue; // restart the loop
                }

                printf("\nEnter the number; ");
                if (scanf("%f", &num2) != 1)
                { // clear the invalid response
                    printf("\nSythax error, value entered not a number\n");
                    while (getchar() != '\n')
                        ;
                    continue; // restart the loop
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

            // operator doesn't match any case constant +, -, *, /
            default:
                printf("\nError! operator is not correct");
                break;
            }
        }

        else if (calc_type == 2)
        {
            printf("\na). Factorisation");
            printf("\nb). Trigonometric functions");
            printf("\nc). Roots (square root, cube root)");
            printf("\nEnter the type you want (a/b/c): ");
            scanf("%d", &desire);
            if (desire == 'a')
            {
                printf("Enter the number: ");
                scanf("%f", &number);
                factor(number);
            }
            else if (desire == 'b')
            {
                printf("\n    1. Tan(x)");
                printf("\n    2. Sin(x)");
                printf("\n    3. Cos(x)");
                printf("Enter number of the desired trig function: ");
                scanf("%d", &trig);

                printf("Enter the angle: ");
                scanf("%f", &number);

                if (trig == 1)
                {
                    result = tan(trig);
                    printf("\nThe operation tan(%.1f) = %.3f", number, result);
                }
                else if (trig == 2)
                {
                    result = sin(trig);
                    printf("\nThe operation sin(%.1f) = %.3f", number, result);
                }
                else if (trig == 3)
                {
                    result = cos(trig);
                    printf("\nThe operation cos(%.1f) = %.3f", number, result);
                }
                else
                {
                    printf("\nValue entered not among trig options given");
                }
            }
            else if (desire == 'c')
            {
                printf("\nRoots:  1. Square root   2. cube root");
                scanf("%d", &root);

                printf("Enter the number: ");
                scanf("%f", &number);

                if (root == 1)
                {
                    result = squareroot(number);
                    printf("\nThe squareroot of %f is %f", number, result);
                }
                else if (root == 2)
                {
                    result = cuberoot(number);
                    printf("\nThe cuberoot of %f is %f", number, result);
                }
                else
                {
                    printf("\nThe option entered not among root options.");
                }
            }
            else
            {
                printf("The option entered not among options");
            }
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