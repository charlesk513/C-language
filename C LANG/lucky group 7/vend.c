#include "vend.h"

int select_drink()
{
    printf("\nSelect a drink (1-5): ");
    if (scanf("%d", &choice) != 1 || choice < 1 || choice > 5)
    {
        printf("Invalid selection. Try again.\n");
        while (getchar() != '\n')
            ; // clear buffer
    }
    return choice;
}
void available_drinks()
{
    printf("\nAvailable Drinks:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d. %s (UGX%d) - Stock: %d\n", i + 1, drinks[i], prices[i], stock[i]);
    }
}
void change_credit()
{

    price = prices[choice - 1];

    printf("\nYou selected %s. Please insert UGX%d: ", drinks[choice - 1], price);
    if (scanf("%d", &credit) != 1 || credit <= 0)
    {
        printf("\nInvalid amount inserted. Please top up.");
        while (getchar() != '\n')
            ; // clear buffer
    }

    if (credit < price)
    {
        printf("\nInsufficient amount. Top up.\n");
    }

    change = credit - price;
    stock[choice - 1]--;
    printf("\nEnjoy your %s!\n", drinks[choice - 1]);
    if (change > 0)
    {
        calculate_change(change);
    }
    else
    {
        printf("No change to return.\n");
    }

    continue_shopping = get_continue_choice();
}

/*
function name: calculate_change
arguments: int change
description: Breaks down the change amount into notes and coins based on predefined denominations and prints each
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

/*
function name: get_continue_choice
arguments: none
description: Asks the user if they want to make another purchase, ensures valid input (0 or 1)
return type: int (0 for No, 1 for Yes)
*/
int get_continue_choice()
{
    int choice;

    while (1)
    {
        printf("\nWould you like another purchase? (1 for Yes, 0 for No): ");
        if (scanf("%d", &choice) != 1)
        {
            printf("\nInvalid input! Please enter 1 for Yes or 0 for No.\n");
            while (getchar() != '\n')
                ;
            continue;
        }
        if (choice == 1)
        {
            printf("\nThank you, go on with your shopping! ");
            break;
        }
        else if (choice == 0)
        {
            printf("\nThank you, have a safe journey!");
            continue_shopping = 0;
            break;
        }
        else
        {
            printf("\nInvalid choice entered, its nt among options given");
            continue;
        }
    }
    return continue_shopping;
}