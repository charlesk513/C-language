#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#include "vending.h"
#include "vending.c"

int result;
typedef struct
{
    char name[50];
    int cost;
    int stock;
} Item;

void InitializeItems(Item items[])
{
    strcpy(items[0].name, "Radio");
    items[0].cost = 12000;
    items[0].stock = 15;

    strcpy(items[1].name, "Laptop");
    items[1].cost = 1500000;
    items[1].stock = 5;

    strcpy(items[2].name, "Mouse");
    items[2].cost = 20000;
    items[2].stock = 10;

    strcpy(items[3].name, "Keyboard");
    items[3].cost = 25000;
    items[3].stock = 8;

    strcpy(items[4].name, "Bluetooth");
    items[4].cost = 12000;
    items[4].stock = 15;

    strcpy(items[5].name, "Iphone");
    items[5].cost = 800000;
    items[5].stock = 4;
}

void DisplayMenu(Item items[], int num_items)
{
    printf("\n---Vending machine menu---\n");
    for (int i = 0; i < num_items; i++)
    {
        printf("\n%d. %s costs Ugx %d/= --stock = %d", i + 1, items[i].name, items[i].cost, items[i].stock);
    }
    printf("\n--------------------------\n");
}

int main()
{
    int num_items = 6;
    Item items[6];
    InitializeItems(items);

    while (1)
    {
        DisplayMenu(items, num_items);

        printf("\nEnter the item you want from (1 / %d): ", num_items);
        scanf("%d", &choice);
        if (choice < 1 && choice > num_items)
        {
            printf("\nInvalid input!");
            break;
        }
        int selected_index = choice - 1;
        if (items[selected_index].stock <= 0)
        {
            printf("\nSorry the %s is out of stock, take something else", items[selected_index].name);
            continue;
        }
        int quantity;
        printf("Enter the number of %s you want: ", items[selected_index].name);
        scanf("%d", &quantity);

        if (quantity > items[selected_index].stock)
        {
            printf("The quantity entered is more than %s in stock", items[selected_index].name);
            continue;
        }

        int amount_charged;
        amount_charged = items[selected_index].cost * quantity;

        int amount_inserted;
        printf("Enter the cash you have for the %s, (%d): ", items[selected_index].name, amount_charged);
        scanf("%d", &amount_inserted);

        change = amount_inserted - amount_charged;

        if (change < 0)
        {
            printf("\nInadequate funds, credit entered is less by %d, to purchase %s\n", change, items[selected_index].name);
            continue;
        }
        else if (change > 0)
        {
            printf("\nDisensing %s, and your balance is %d\n", items[selected_index].name, change);

            int denomination[] = {50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100};
            int number_of_denominations = sizeof(denomination) / sizeof(denomination[0]);

            printf("Change to return: UGX%d\n", change);
            for (int i = 0; i < number_of_denominations; i++)
            {
                if (change >= denomination[i])
                {
                    int count = change / denomination[i];
                    change -= count * denomination[i];
                    if (denomination[i] >= 1000)
                        printf("%d notes: %d\n", denomination[i], number_of_denominations);
                    else
                        printf("%d coins: %d\n", denomination[i], number_of_denominations);
                }
            }
        }

        else
        {
            printf("Dispensing your %d %s, no change change. Thank you.", quantity, items[selected_index].name);
        }
        items[selected_index].stock -= quantity;
    }
    printf("\n\nThank you for purchasing goods at KC online supermarket");

    return 0;
}
