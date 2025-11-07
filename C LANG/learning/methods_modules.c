#include <stdio.h>

// int main()
// {

// // to change cases fro capital to small,
// #include <ctype.h>
// name = "charles"
// toupper(name)

// recursion this is a function call that calls a function repeatedly like a loop and can cause an infinite
// interation of the function. To stop it, we state it with in a condition hence can easily be broken

int product(int n);
int pdt;
int pdtsum = 0;
int main()
{

    int number, result;
    printf("Enter a positive value ");
    scanf("%d", &number);

    result = product(number);
    printf("Sum = %d", result);

    return 0;
}

int product(int n)
{

    if (n >= 1)
    {
        if (n > 2)
        {
            pdt = n * (n - 1);
            pdtsum += pdt;
        }
        else
        {
            printf("The product is %d\n", pdtsum);
        }
        // this statement recurses the function as the value isn't a zero
        return n + product(n - 1);
    }
    else
    {
        return n;
    }
}
