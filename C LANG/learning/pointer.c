// pointers enable us acsess the memory address of variables and  functions. (%p)
#include <stdio.h>

// int main()
// {
// int age = 25;
// char school[] = "mbarara university";

// printf("The address of age is %p\n", &age);
// printf("The address of school is %p\n", &school);

// //  a pointer variable (int* name) stores the address of the variable not the actual value
// // is also an address of the location in memory where the variable is stored

// int *year = &age; // this line copies the memory address of age and stores it in variable year
// printf("\n%p", year);
// // accessing the value using a pointer;
// printf("\nValue: %d", *year); // This prints the value stored at that address passed

// // updating the value of the variable using the pointer
// *year = 31;
// printf("\nvalue of year: %d", *year);

// instaciating salary and passing the adress to the pointer
// double salary;
// printf("Enter the salary: ");
// scanf("%lf", &salary);

// printf("\nThe address salary: %p", &salary);

// double *ptr;
// ptr = &salary;

// printf("\n\nThe address: %p", ptr);   // adress
// printf("\nThe ptr value: %lf", *ptr); // value

// *ptr = *ptr * 2; // changing the value of salary using the pointer
// printf("Salary: %lf", salary);        //new salary after multiplication

// //getting the greatest item in an array
// int array[] = {34, 12, 21, 54, 48};
// int largest = *array;
// int length = sizeof(array) / sizeof(array[0]);
// for (int i = 0; i < length; i++)
// {
//     if (largest > *(array + i))
//     {
//     }
//     else
//     {
//         largest = *(array + i);
//     }
// }
// printf("The largest element is: %d", largest);

// pointers on functions

// updating a value using a point argument
// void umber(int *num)
// {
//     *num = 41;
// }
// int main()
// {
//     int number = 20;
//     umber(&number);
//     printf("The number is %d", number);

// using a pointer fuunction to operate

// int *squareNumber(int *num)
// {
//     int square = *num * *num;
//     *num = square;
//     return num;
// }
// int main()
// {
//     int number = 20;
//     squareNumber(&number);
//     printf("The Square is %d", number);

// function pointer to return the address of the value
// int *multiplication(int *num1, int *num2, int *product)
// {
//     *product = *num1 * *num2;
//     return product;
// }
int main()
{
    //     int num1 = 13;
    //     int num2 = 9;
    //     int product;
    //     int *result = multiplication(&num1, &num2, &product);
    //     printf("The product is %d", product);

    // int numbers[5] = {10, 20, 30, 40, 50};
    // int *ptr;
    // ptr = &numbers;
    // int num = sizeof(numbers) / sizeof(numbers[0]);
    // for (int i = 0; i < num; i++)
    // {
    //     printf("%d   ", *(ptr + i));
    //     printf("%p\n", ptr + i);
    // }

    // char s[10];
    // int count = 0;

    // printf("Enter the string: ");
    // scanf("%s", s);
    // for (int i = 0; i != '\0'; i++)
    // {
    //     count++;
    // }
    // int str_len(char *s);
    // printf("%d", count);

    int numbers[] = {10, 20, 30, 40, 50};
    int *ptr;
    int num = sizeof(numbers) / sizeof(numbers[0]);
    printf("%d", num);
    printf("%d", *ptr);
    for (int i = 0; i < num; i++)
    {
        printf("%d", *(ptr + i));
        printf("%p", ptr + i);
    }
    return 0;
}
