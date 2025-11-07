#include <stdio.h>
void main()
{
    // while loop
    // int i = 0;
    // while (i<5) {
    //     printf("this is number %d\n", i);
    //     i++;
    // }
    //     return 0;
    // }

    // do while loop, this loop, we open a do keyword and write the execution code, the while appears later
    // int i = 0;
    // do
    // {
    //     printf("the number is less than five %d\n", i);
    //     i++;
    // } while (i < 5) : return 0;

    // }

    // // exercise do while, to print a multiplication table of  number from 10 to 0
    // int i = 10;
    // int number;
    // printf("Insert the number ");
    // scanf("%d", &number)
    // do{
    //     printf("%d * %d = %d\n", number, i, i*number);
    //     i--;
    // } while(i>=0):
    // return 0;

    // for loop   for(initialisation expression; test expression; update expression)
    // for (int i; i<5; i++){
    //     printf("%d", i);
    // }
    //     return 0;
    //

    //     int i = 0;
    //     do
    //     {
    //         printf("the number is less than five %d\n", i);
    //         i++;
    //     } while (i <= 5);
    //     return 0;
    // }

    // for (i = 0; i <= 5; i++)
    // {
    //     if (i == 3)
    //     {
    //         break
    //     }
    //     printf("the number is less than five %d\n", i);

    //     int counter;
    //     for (counter in range(1, 10))
    //     {
    //         printf("%d", counter);
    //         counter++

    // wen we code a for loop with muptiple conditions, the loop will base on the last condition nearest to a termintion mark
    // int i, j;

    // for (i = 0, j = 0; i < 10, j < 20; i++, j++)
    // {
    //     printf("i = %d j = %d\n", i, j);
    // }

    //     }

    int a = 1;
    for (; a <= 3; printf("%d ", a++))
        ;
    for (; a; printf("%d ", a--))
        ;
}