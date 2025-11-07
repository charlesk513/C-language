#include <stdio.h>
#include <stdbool.h>

void unknown(size)
{
    int i;
    int item;
    printf("Enter the size: ");
    scanf("%d", &size);
    char my_list[size];
    int length = sizeof(my_list) / sizeof(my_list[0]);
    while (i < length)
    {
        printf("\nEnter element (pos [%d]): ", i);
        scanf("%d", &item);
        my_list[i] = item;
        i++;
    }
    printf("The list is: [");
    for (int j = 0; j < length; j++)
    {
        if (j != (size - 1))
        {
            printf(" %d,", my_list[j]);
        }
        else
        {
            printf(" %d", my_list[j]);
        }
    }
    printf("]");
}

int main()
{
    int i = 0;
    int size;

    unknown(size);
    printf("\nDone\n");
    return 0;
}