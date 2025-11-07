#include <stdio.h>
#include <stdbool.h>
int main()
{
    printf("\n====Simple Calculator====\n");
    char operator;
    double num1, num2, another_value;
    int permission;
    int allow;
    double result = 0.0;
    double result2 = 0.0;
    double new_result = 0.0;

    while (1)
    {
        printf("\nOPTIONS AVAILABLE\n");
        printf("\n1. Do you want to close the calculator app?");
        printf("\n2. Go ahead with the calculator\n");

        printf("Enter the option you want, please among (1,2): ");
        scanf("%d", &allow);

        if (allow == 1)
        {
            printf("Quitted the calculator, safe journey");
            break;
        }
        else if (allow == 2)
        {
            printf("\n1. New operation");
            printf("\n2. Continue with the last answer\n\n");
            printf("Enter the option you want among (1,2): ");
            scanf("%d", &permission);

            if (permission == 1)
            {
                printf("\nOPERATIONS\n");
                printf("\n1. Addition (+)");
                printf("\n2. Subtraction (-)");
                printf("\n3. Multiplication (*)");
                printf("\n4. Division  (/)");
                printf("\n5. Modulus (%%)\n");

                printf("\nEnter the operator among ('+', '-', '*', '/', '%%'): ");
                scanf("%s", &operator);

                printf("\nEnter the first number; ");
                scanf("%lf", &num1);

                printf("\nEnter the second number; ");
                scanf("%lf", &num2);

                switch (operator)
                {
                case '+':
                    result = num1 + num2;
                    printf("The operation %.1lf + %.1lf = %.3lf", num1, num2, result);
                    break;

                case '-':
                    result = num1 - num2;
                    printf("The operation %.1lf - %.1lf = %.3lf", num1, num2, result);
                    break;

                case '*':
                    result = num1 * num2;
                    printf("The operation %.1lf * %.1lf = %.3lf", num1, num2, result);
                    break;

                case '/':
                    if (num2 == 0)
                    {
                        printf("Error! Division by zero.");
                    }
                    else
                    {
                        result = num1 / num2;
                        printf("The operation %.1lf / %.1lf = %.3lf", num1, num2, result);
                    }
                    break;
                case '%':
                    result = (int)num1 % (int)num2;
                    printf("The operation %.1lf %% %.1lf = %.3lf", num1, num2, result);
                    break;

                // operator doesn't match any case constant +, -, *, /
                default:
                    printf("Error! operator is not correct");
                    break;
                }

                new_result += result;
                printf("\nThe answer %.3lf is stored successfully\n", new_result);

                printf("\n1. New operation");
                printf("\n2. Continue with the last answer\n\n");
                printf("Enter the option you want among (1,2): ");
                scanf("%d", &permission);
            }
            if (permission == 1)
            {
                new_result = 0.0;
                continue;
            }

            if (permission == 2)
            {
                printf("\nOPERATIONS\n");
                printf("\n1. Addition (+)");
                printf("\n2. Subtraction (-)");
                printf("\n3. Multiplication (*)");
                printf("\n4. Division  (/)");
                printf("\n5. Modulus (%%)");

                printf("\nEnter the operator among ['+', '-', '*', '/', '%%']: ");
                scanf("%s", &operator);

                printf("\nEnter the value; ");
                scanf("%lf", &another_value);

                switch (operator)
                {
                case '+':
                    result2 = new_result + another_value;
                    printf("The operation %.1lf + %.1lf = %.3lf", new_result, another_value, result2);
                    break;

                case '-':
                    result2 = new_result - another_value;
                    printf("The operation %.1lf - %.1lf = %.3lf", new_result, another_value, result2);
                    break;

                case '*':
                    result2 = new_result * another_value;
                    printf("The operation %.1lf * %.1lf = %.3lf", new_result, another_value, result2);
                    break;

                case '/':
                    if (another_value == 0)
                    {
                        printf("Error! Division by zero.");
                    }
                    else
                    {
                        result2 = new_result / num2;
                        printf("The operation %.1lf / %.1lf = %.3lf", new_result, num2, result2);
                    }
                    break;
                case '%':
                    result = (int)new_result % (int)another_value;
                    printf("The operation %.1lf %% %.1lf = %.3lf", new_result, another_value, result2);
                    break;
                }

                printf("\nThe result is updated to %.3lf successfully\n", result2);
                new_result = result2;
            }
            else
            {
                printf("invalid input, your answer is not among options!");
                break;
            }
        }
        else
        {
            printf("invalid input, your answer is not among options!");
            break;
        }
        printf("\nThank you for collaborating with BCS_GRP_6\n");
    }
    return 0;
}