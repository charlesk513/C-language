#include <stdio.h>
#include <stdbool.h>

double num1, num2;
char operator;
double result;
char choice;
int first = 1;
int main()
{

    printf("\nSimple Calculator\n");
    printf("\nOPERATIONS\n");
    printf("\n1. Addition (+)");
    printf("\n2. Subtraction (-)");
    printf("\n3. Multiplication (*)");
    printf("\n4. Division  (/)");
    printf("\n5. Modulus (%)");
    do
    {
        if (first)
        {
            printf("\nEnter the operator among ['+', '-', '*', '/', '%']: ");
            scanf(" %c", &operator);

            printf("\nEnter the first number; ");
            scanf("%lf", &num1);

            printf("\nEnter the second number; ");
            scanf("%lf", &num2);
        }
        else
        {
            num1 = result;
            printf("answer = %.3lf", num1);

            printf("\nEnter the operator among ['+', '-', '*', '/', '%']: ");
            scanf(" %c", &operator);

            printf("\nEnter the second number; ");
            scanf("%lf", &num2);
        }

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
                printf("mathematical error division by zero");
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
            printf("\nError! operator is not correct\n");
        }
        printf("\nDo you want to continue?): \n");
        printf("y. continue with previous result:\n ");
        printf("n. start a new calculation.\n");
        printf("\nEnter (y/n): ");
        scanf(" %c", &choice);
        if (choice == 'y')
        {
            first = 0;
        }
        else if (choice == 'n')
        {
            first = 1;
        }
        else
        {
            printf("not an option");
            break;
        }
    } while (1);

    printf("\nThank you for collaborating with BCS_GRP_6\n");

    return 0;
}