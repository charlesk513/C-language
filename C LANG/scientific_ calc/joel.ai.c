#include <stdio.h>
#include <math.h>

int main()
{
    double num1, num2, result;
    int choice;
    char cont;

    do
    {
        printf("Choose an operation:\n");
        printf("1. Basic Arithmetic (+, -, *, /)\n");
        printf("2. Square Root\n");
        printf("3. Trigonometry (sin, cos, tan)\n");
        printf("4. Exit\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the first number: ");
            scanf("%lf", &num1);
            printf("Enter the operator (+, -, *, /): ");
            char op;
            scanf(" %c", &op);
            printf("Enter the second number: ");
            scanf("%lf", &num2);

            switch (op)
            {
            case '+':
                result = num1 + num2;
                printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
                break;
            case '-':
                result = num1 - num2;
                printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
                break;
            case '*':
                result = num1 * num2;
                printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
                break;
            case '/':
                if (num2 != 0)
                {
                    result = num1 / num2;
                    printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
                }
                else
                {
                    printf("Error: Division by zero!\n");
                }
                break;
            default:
                printf("Invalid operator!\n");
            }
            break;
        case 2:
            printf("Enter a number: ");
            scanf("%lf", &num1);
            if (num1 >= 0)
            {
                result = sqrt(num1);
                printf("sqrt(%.2lf) = %.2lf\n", num1, result);
            }
            else
            {
                printf("Error: Square root of negative number!\n");
            }
            break;
        case 3:
            printf("Choose a trigonometric function:\n");
            printf("1. sin\n");
            printf("2. cos\n");
            printf("3. tan\n");
            int trig_choice;
            scanf("%d", &trig_choice);
            printf("Enter an angle in radians: ");
            scanf("%lf", &num1);

            switch (trig_choice)
            {
            case 1:
                result = sin(num1);
                printf("sin(%.2lf) = %.2lf\n", num1, result);
                break;
            case 2:
                result = cos(num1);
                printf("cos(%.2lf) = %.2lf\n", num1, result);
                break;
            case 3:
                if (cos(num1) != 0)
                {
                    result = tan(num1);
                    printf("tan(%.2lf) = %.2lf\n", num1, result);
                }
                else
                {
                    printf("Error: tan is not defined for this angle!\n");
                }
                break;
            default:
                printf("Invalid choice!\n");
            }
            break;
        case 4:
            printf("Exiting...\n");
            return 0;
        default:
            printf("Invalid choice!\n");
        }

        printf("Do you want to continue with the previous result? (y/n): ");
        scanf(" %c", &cont);

        if (cont == 'y' || cont == 'Y')
        {
            double new_num;
            printf("Enter an operator (+, -, *, /): ");
            char new_op;
            scanf(" %c", &new_op);
            printf("Enter the second number: ");
            scanf("%lf", &new_num);

            switch (new_op)
            {
            case '+':
                result += new_num;
                printf("%.2lf\n", result);
                break;
            case '-':
                result -= new_num;
                printf("%.2lf\n", result);
                break;
            case '*':
                result *= new_num;
                printf("%.2lf\n", result);
                break;
            case '/':
                if (new_num != 0)
                {
                    result /= new_num;
                    printf("%.2lf\n", result);
                }
                else
                {
                    printf("Error: Division by zero!\n");
                }
                break;
            default:
                printf("Invalid operator!\n");
            }
        }
    } while (1);

    return 0;
}