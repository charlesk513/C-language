#include <stdio.h>
#include <stdbool.h>


char operator;
double number1, number2;
int permission = 1;
double result;
int choice;
int main()
{
    printf("\n====Simple Calculator====\n");
    printf("\nOPERATIONS\n");
    printf("\n1. Addition (+)");
    printf("\n2. Subtraction (-)");
    printf("\n3. Multiplication (*)");
    printf("\n4. Division  (/)");
    printf("\n5. Modulus (%)");

    do
    {
        if (permission)
        {
            printf("\nEnter the operator among ['+', '-', '*', '/', '%']: ");
            scanf(" %c", &operator);
            if (operator == '+' || operator == '-' || operator == '*' || operator == '/' || operator == '%')
            {
                // valid operator, do nothing and continue with the lower codes
                        }
            else
            {
                printf("Sythax error, value entered not an operator\n");
                while (getchar() != '\n')
                    ;
                continue; // restart the loop
            }

            printf("\nEnter the first number; ");
            if (scanf("%f", &num1) != 1)  // checks if scanf() has returned a value that is not 1
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

            printf("\nEnter the operator among ['+', '-', '*', '/', '%']: ");
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
            result = number1 + number2;
            printf("The operation %.1lf + %.1lf = %.3lf", number1, number2, result);
            break;

        case '-':
            result = number1 - number2;
            printf("The operation %.1lf - %.1lf = %.3lf", number1, number2, result);
            break;
        case '*':
            result = number1 * number2;
            printf("The operation %.1lf * %.1lf = %.3lf", number1, number2, result);
            break;

        case '/':
            if (number2 == 0)
            {
                printf("Error! Division by zero.");
            }
            else
            {
                result = number1 / number2;
                printf("The operation %.1lf / %.1lf = %.3lf", number1, number2, result);
            }
            break;
        case '%':
            result = (int)number1 % (int)number2;
            printf("The operation %.1lf %% %.1lf = %.3lf", number1, number2, result);
            break;

        // operator doesn't match any case constant +, -, *, /
        default:
            printf("Error! operator is not correct");
            break;
        }
        printf("\n\nOPERATIONS");
        printf("\n1. New operation");
        printf("\n2. Continue with the last answer\n\n");
        printf("Enter the option you want among (1,2): ");
        scanf("%d", &choice);
        if (choice == 1)
        {
            permission = 1;
        }
        else if (choice == 2)
        {
            permission = 0;
        }
        else
        {
            printf("\nOption entered not among\n");
            break;
        }
    } while (1);
    printf("\nThank you for collaborating with BCS_GRP_6, we appreciate! \n");
    return 0;
}
