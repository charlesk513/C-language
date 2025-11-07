#include <stdio.h>

// float average;
// int number, sum = 0;
// int marks[5];
// int i = 0;

// int main()
// {

// printf("Enter the number of students ");
// scanf("%d", &number);

// for (i = 0; i < number; ++i)
// {

//     printf("Enter the mark of the %d students ", i + 1);
//     scanf("%d", &marks[i]);
// }
// sum = marks[0] + marks[1] + marks[2] + marks[3] + marks[4];

// average = sum / number;
// printf("The average of %d is %f", number, average);

// multi-dimentional arrays, it has the number of arrays and then the number of items to be in the arrays
//     int dimentional_array[2][3] = {{10, 18, 16}, {4, 5, 6}};
//     for (int i = 0; i < 2; ++i)
//     {
//         for (int j = 0; j < 3; ++j)
//         {
//             printf("The i is %d\n", dimentional_array[i][j]);
//         }

//         printf("\n");
//     }
//     return 0;
// }

//     // STRINGS
//     // a string is an array of characters

//     char str[20];

//     printf("Enter your name plaese ");

//     fgets(str, sizeof(str), stdin);

//     printf("%s", str);

//     return 0;
// }

// methods of strings, when we want to use strings in c, we have to link the library for the srings.

#include <string.h>

// Methods include,

int main()
{
    // char name[20] = "Kabunga charles";
    // printf("\nname: %s   (original)", name);
    // // strlen() (%zu)    this method counts characters even the space is counted

    // printf("\n\nThe length of name is %zu", strlen(name));

    // // strcpy() this method copy a string from the source string to the destination string

    // char FullName[strlen(name)];

    // strcpy(FullName, name);
    // printf("\nFull name is now: %s", FullName);

    // // strcat()   this method concatenates the strings together, then when you print the first string, both appear.
    // char prefix[] = "My name is, ";
    // strcat(prefix, FullName);

    // printf("\n%s    (concatenated)", prefix);

    // // strcmp() this method compares the strings to see their resemblance, if the are similar, a zero is returned, else a non zero value is returned
    // char Figure[] = "Kabunga Charles";
    // int result = strcmp(name, Figure);
    // int new_result = strcmp(name, prefix);

    // printf("\nname == Fullname is %d", result);
    // printf("\nname == prefix is %d", new_result);

    // // exercise(programiz)
    // char string1[20];
    // char string2[20];

    // printf("\nEnter string1 ");
    // fgets(string1, sizeof(string1), stdin);

    // printf("\nEnter string2 ");
    // fgets(string2, sizeof(string2), stdin);

    // if (strlen(string1) < strlen(string2))
    // {
    //     printf("\nString one is less than string2");
    // }
    // else if (strlen(string1) > strlen(string2))
    // {
    //     printf("\nString 2 is greater than string1");
    // }
    // else
    // {
    //     printf("The 2 strings are equal");
    // }

    // char team[5][20] = {{'m', 'a', 'n', '\0'}, {'c', 'h', 'e', '\0'}};
    // printf(" %c\n", team[0][1]);
    // int Team[2][3] = {{1, 2, 3}, {4, 5, 6}};
    // printf("%d\n", Team[1][2]);

    // int x[] = {1, 2, 3, 4, 5, 9, 6};
    // int length = sizeof(x) / sizeof(x[0]);
    // printf("Length: %d\n", length);
    // for (int i = 0; i < length; i++)
    // {
    //     printf("%d\n", x[i]);
    // }

    char sir_name[10];
    char first_name[10];

    printf("Enter the name please: ");
    fgets(sir_name, sizeof(sir_name), stdin);

    printf("\nEnter the name please: ");
    fgets(first_name, sizeof(first_name), stdin);
    printf("Name: %s , %s", sir_name, first_name);

    int *result = strcmp(strlen(sir_name), strlen(first_name));
    printf("%d", result);
    return 0;
}