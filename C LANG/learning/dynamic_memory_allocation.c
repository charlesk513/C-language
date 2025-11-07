#include <stdio.h>

// dynamic memory allocation, we use the key words malloc, realloc and free
int main()
{

    // malloc (memory allocation) enables us to dynamically allocate memory of an array

    // int n = 4;  //number of desired elements
    // int *ages;

    // ages = (int *) malloc(n * sizeof(ages));

    // if (ages == NULL)   //if data wasn't allocated the result is NULL
    // {
    //     printf("\nThe memory is not allocated!");
    //     return 0;
    // }

    // for (int i = 0; i < n; ++i)
    // {
    //     printf("\nEnter the value %d: ", i);
    //     scanf("%d", (ages + i));
    // }

    // printf("\nEntered values: ");
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d", *(ages + i));
    // }

    // free(ages);  //frees the memory allocated by malloc

    // realloc(re-allocate memory) enables us to increase on the number of items of the array that was allocated by malloc

    // int n = 4; // number of desired elements
    // int *ages;

    // ages = (int *)malloc(n * sizeof(ages));

    // if (ages == NULL) // if data wasn't allocated the result is NULL
    // {
    //     printf("\nThe memory is not allocated!");
    //     return 0;
    // }
    // for (int i = 0; i < n; ++i)
    // {
    //     printf("\nAllocated memory %d is %p: ", i, (ages + i));
    // }

    // n = 6;
    // ages = realloc(ages, n * sizeof(int));  //on the stored 4 addresses, realloc adds on 2 without changing the original

    // for (int i = 0; i < n; i++)
    // {
    //     printf("\nRe-Allocated memory %d is %p:", i, (ages + i));
    // }

    // free(ages); // frees the memory allocated by malloc

    // exercise   allocate memory for four values of ages and then use realloc to add on more two

    //     int n = 4; // number of desired elements
    //     int *ages;

    //     ages = (int *)malloc(n * sizeof(ages));

    //     if (ages == NULL) // if data wasn't allocated the result is NULL
    //     {
    //         printf("\nThe memory is not allocated!");
    //         return 0;
    //     }
    //     for (int i = 0; i < n; ++i)
    //     {
    //         printf("\nEnter the value %d: ", i);
    //         scanf("%d", ages + i);
    //     }
    //     printf("\nEntered values: ");
    //     for (int i = 0; i < n; i++)
    //     {
    //         printf(" %d, ", *(ages + i));
    //     }

    //     n = 6;
    //     ages = realloc(ages, n * sizeof(int)); // on the stored 4 addresses, realloc adds on 2 without changing the original

    //     for (int i = 0; i < n; i++)
    //     {
    //         printf("\nEnter the value %d: ", i);
    //         scanf("%d", ages + i);
    //     }
    //     printf("\nEntered values: ");
    //     for (int i = 0; i < n; i++)
    //     {
    //         printf(" %d, ", *(ages + i));
    //     }
    //     free(ages); // frees the memory allocated by malloc
    //     return 0;
    // }