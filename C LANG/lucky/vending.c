#include <stdio.h>

/*
    function name: calculate_change
    arguments: int change
    description:
        Determines the number of notes and coins to return as change
        in Ugandan Shilling denominations and prints them.
    return type: void
*/
void calculate_change(int change)
{
    printf("Change to return: UGX%d\n", change);
    for (int i = 0; i < denom_count; i++)
    {
        if (change >= denominations[i])
        {
            int count = change / denominations[i];
            change -= count * denominations[i];
            if (denominations[i] >= 1000)
                printf("%d notes: %d\n", denominations[i], count);
            else
                printf("%d coins: %d\n", denominations[i], count);
        }
    }
}