#include <stdio.h>
#include <string.h>

// Structure to represent an item
typedef struct
{
    char name[20];
    float cost;
    int stock;
} Item;

// Function to initialize items
void initializeItems(Item items[])
{
    strcpy(items[0].name, "Youghurt");
    items[0].cost = 5.25;
    items[0].stock = 10;

    strcpy(items[1].name, "Soda");
    items[1].cost = 3.50;
    items[1].stock = 8;

    strcpy(items[2].name, "kc energy drink");
    items[2].cost = 10.50;
    items[2].stock = 5;
}

// Function to display menu
void displayMenu(Item items[], int num_items)
{
    printf("\n--- Vending Machine Menu ---\n");
    for (int i = 0; i < num_items; i++)
    {
        printf("%d. %s ($%.2f) - Stock: %d\n", i + 1, items[i].name, items[i].cost, items[i].stock);
    }
    printf("---------------------------\n");
}

int main()
{
    Item items[3]; // Example with 3 items
    int num_items = 3;
    initializeItems(items);

    int choice;
    float amount_inserted;
    float change;
    int quantity;
    float total_cost = 0.0;

    while (1)
    {
        displayMenu(items, num_items);
        printf("Enter your choice (1-%d) or 0 to exit: ", num_items);
        scanf("%d", &choice);

        if (choice == 0)
        {
            printf("Exiting vending machine. Goodbye!\n");
            break;
        }

        if (choice < 1 || choice > num_items)
        {
            printf("Invalid choice. Please try again.\n");
            continue;
        }

        int selected_index = choice - 1;

        printf("Enter the quantity of %s you want: ", items[selected_index].name);
        scanf("%d", &quantity);

        if (items[selected_index].stock == 0)
        {
            printf("Sorry, %s is out of stock.\n", items[selected_index].name);
            continue;
        }
        else if (items[selected_index].stock < quantity)
        {
            printf("Sorry, the stock is less than the quantity you want, we only have %d remaining.", items[selected_index].stock);
            continue;
        }

        total_cost = items[selected_index].cost * quantity;
        printf("The total cost for %d %s is $%.2f\n", quantity, items[selected_index].name, total_cost);

        printf("Please insert money for %s ($%.2f): ", items[selected_index].name, total_cost);
        scanf("%f", &amount_inserted);

        change = amount_inserted - total_cost;
        if (change < 0)
        {
            printf("Insufficient funds. Short of %.3f to take %s.\n", change, items[selected_index].name);
            continue;
        }
        else if (change >= 0)
        {

            printf("Dispensing %s. Your change is $%.2f. Thank you.\n", items[selected_index].name, change);
            items[selected_index].stock--;
        }
    }

    return 0;
}
