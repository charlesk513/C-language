#include <stdio.h>
#include <stdlib.h>

#include "vend.h"
#include "vend.c"

int denom_count = sizeof(denominations) / sizeof(denominations[0]);

int main()
{
    while (continue_shopping)
    {
        available_drinks();
        select_drink();

        if (stock[choice - 1] == 0)
        {
            printf("Sorry, %s is out of stock!\n", drinks[choice - 1]);
            continue;
        }
        change_credit();
    }
    printf("\n\nThank you for using the vending machine!\n");
    return 0;
}