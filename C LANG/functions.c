#include <stdio.h>
// void addNumber(x, y)
// {
//     int sum;
//     sum = x + y;
//     printf("The sum of %d and %d is %d\n", x, y, sum);
// }
//  int main()
//  {
//     addNumber(8, 9);
//     return 0;
// }

// void squareNumber(int num)
// {
//     int square = num * num;
//     printf("The square of %d is %d\n", num, square);
// }
// int main()
// {
//     squareNumber(14);
//     return 0;
// }

// void addNumber(int a, int b)
// {
//     int sum;
//     sum = a + b;
//     printf("The sum of %d and %d is %d\n", a, b, sum);
// }
// int main()
// {
//     addNumber(8, 9);
//     return 0;
// }
// #include <math.h>
// int num1;
// int result;
// int main()
// {
//     printf("Enter the number: ");
//     scanf("%d", &num1);

//     int result = sqrt(num1);
//     printf("The square root of %d is %d", num1, result);
//     return result;

//     int power = pow(num1, result);
//     printf("%d power to %d = %d", num1, result, power);

// function structs; these are using in assighnin different elements to the same item

// we can use this first way "struct ....", the whole of it is taken to be a data type
// struct Complex      //"struct Complex" is the data type of the function
// {
//     double real;
//     double imaginary;
// };

// int main()
// {
//     struct Complex c1 = {.real = 34.2, .imaginary = 41};
//     struct Complex c2 = {.real = 8.5, .imaginary = 56.1};

//     struct Complex subtraction;
//     subtraction.real = c1.real - c2.real;
//     subtraction.imaginary = c1.imaginary - c2.imaginary;

//     printf("The difference is:  %.2lf + %.2lfi", subtraction.real, subtraction.imaginary);

// we can still use the summarised format. with typedef struct and the function name at last
// typedef struct
// {
//     double real;
//     double imaginary;

// } complex;

// int main()
// {
//     complex c1 = {.real = 34.2, .imaginary = 41};
//     complex c2 = {.real = 8.5, .imaginary = 56.1};

//     complex subtraction;
//     subtraction.real = c1.real - c2.real;
//     subtraction.imaginary = c1.imaginary - c2.imaginary;

//     printf("The difference is:  %.2lf + %.2lfi", subtraction.real, subtraction.imaginary);

typedef struct
{
    char name[20];
    int age;
    char diagnosis[20];
} patient;

int main()
{
    patient Person;
    Person.name[20];
    Person.age;
    Person.diagnosis;

    printf("Enter the name: ");
    fgets(Person.name, 20, stdin);

    printf("Enter the age: ");
    scanf("%d", &Person.age);

    printf("Enter the diagonosis: ");
    fgets(Person.diagnosis, 20, stdin);

    printf("\n\nPatient: %s\n", Person.name);
    printf("Age: %d\n", Person.age);
    printf("Diagonosis: %s\n", Person.diagnosis);
    return 0;
}
