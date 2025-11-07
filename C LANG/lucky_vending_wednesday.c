#include <stdio.h>
#include <stdlib.h>

// Drink info
const char *drinks[] = {"Coke", "Pepsi", "Sprite", "Fanta", "Mirinda"};
const int prices[] = {1500, 1000, 1500, 1500, 1000};
int stock[] = {5, 5, 5, 5, 5}; // Initial stock

// Denominations
int denominations[] = {50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100, 50};
int denom_count = sizeof(denominations) / sizeof(denominations[0]);

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
    char buffer[100];
    int choice;

    while (1)
    {
        printf("\nWould you like another purchase? (1 for Yes, 0 for No): ");
        if (fgets(buffer, sizeof(buffer), stdin))
        {
            if (sscanf(buffer, "%d", &choice) == 1)
            {
                if (choice == 0 || choice == 1)
                {
                    return choice;
                }
            }
        }
        printf("Invalid input! Please enter 1 for Yes or 0 for No.\n");
    }
}

/*
function name: main
arguments: none
description: Entry point of the vending machine program; handles drink selection, payment, stock update, and looping
return type: int
*/
int main()
{
    int continue_shopping = 1;

    while (continue_shopping)
    {
        printf("\nAvailable Drinks:\n");
        for (int i = 0; i < 5; i++)
        {
            printf("%d. %s (UGX%d) - Stock: %d\n", i + 1, drinks[i], prices[i], stock[i]);
        }

        int choice;
        printf("Select a drink (1-5): ");
        if (scanf("%d", &choice) != 1 || choice < 1 || choice > 5)
        {
            printf("Invalid selection. Try again.\n");
            while (getchar() != '\n')
                ; // clear buffer
            continue;
        }

        if (stock[choice - 1] == 0)
        {
            printf("Sorry, %s is out of stock!\n", drinks[choice - 1]);
            continue;
        }

        int price = prices[choice - 1];
        int credit;
        printf("You selected %s. Please insert UGX%d: ", drinks[choice - 1], price);
        if (scanf("%d", &credit) != 1 || credit <= 0)
        {
            printf("Invalid amount inserted. Please top up.\n");
            while (getchar() != '\n')
                ; // clear buffer
            continue;
        }

        if (credit < price)
        {
            printf("Insufficient amount. Top up.\n");
            continue;
        }

        int change = credit - price;
        stock[choice - 1]--; // reduce stock
        printf("Enjoy your %s!\n", drinks[choice - 1]);
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

    printf("Thank you for using the vending machine!\n");
    return 0;
}