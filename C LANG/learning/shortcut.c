#include <stdio.h>

// ternary operator

int main()
{
    int result;
    char code = '+';

    int num1 = 2;
    int num2 = 3;

    result = (code == '-') ? (num1 + num2) : (num1 - num2);
    printf("The result is: %d", result);

    return 0;
}
