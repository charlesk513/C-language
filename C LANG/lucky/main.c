
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SELECTIONS 50

// Drink info
const char *drinks[] = {"Coke", "Pepsi", "Sprite", "Fanta", "Mirinda"};
const int prices[] = {1500, 1000, 1500, 1500, 1000};
int stock[] = {5, 5, 5, 5, 5}; // Initial stock

// Denominations
int denominations[] = {50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100, 50};
int denom_count = sizeof(denominations) / sizeof(denominations[0]);

calculate_change(int change);

int main()
{
    int continue_shopping = 1;

    while (continue_shopping)
    {
        int credit;
        printf("\nWelcome to the Vending Machine!\n");
        printf("Please insert money to begin: ");
        if (scanf("%d", &credit) != 1 || credit <= 0)
        {
            printf("Invalid amount inserted. Please top up.\n");
            while (getchar() != '\n')
                ; // clear input
            continue;
        }
        while (getchar() != '\n')
            ; // clear newline after scanf

        // Show available drinks
        printf("\nAvailable Drinks:\n");
        for (int i = 0; i < 5; i++)
        {
            printf("%d. %s (UGX%d) - Stock: %d\n", i + 1, drinks[i], prices[i], stock[i]);
        }

        // Ask for all selections at once
        printf("\nEnter your drink choices (space-separated numbers, e.g. 1 2 2 5): ");

        char input_line[256];
        fgets(input_line, sizeof(input_line), stdin);

        int selections[MAX_SELECTIONS];
        int num_selections = 0;

        // Tokenize input
        char *token = strtok(input_line, " ");
        while (token != NULL && num_selections < MAX_SELECTIONS)
        {
            int choice = atoi(token);
            if (choice >= 1 && choice <= 5)
            {
                selections[num_selections++] = choice;
            }
            else
            {
                printf("Invalid selection '%s'. Try again.\n", token);
            }
            token = strtok(NULL, " ");
        }

        if (num_selections == 0)
        {
            printf("No valid selections made.\n");
            continue;
        }

        // Process selections
        for (int i = 0; i < num_selections; i++)
        {
            int choice = selections[i] - 1; // convert to 0-based index
            int price = prices[choice];

            if (stock[choice] == 0)
            {
                printf("Sorry, %s is out of stock!\n", drinks[choice]);
                continue;
            }

            if (credit < price)
            {
                printf("Not enough credit to buy %s (cost: UGX%d, remaining: UGX%d)\n", drinks[choice], price, credit);
                break;
            }

            stock[choice]--;
            credit -= price;
            printf("Enjoy your %s! (Remaining credit: UGX%d)\n", drinks[choice], credit);
        }

        // Return change
        if (credit > 0)
        {
            calculate_change(credit);
        }
        else
        {
            printf("No change to return.\n");
        }

        // Ask if another transaction should begin
        int restart = 0;
        printf("\nWould you like to start a new transaction? (1 for Yes, 0 for No): ");
        scanf("%d", &restart);
        continue_shopping = restart;
        while (getchar() != '\n')
            ; // clear buffer
    }

    printf("Thank you for using the vending machine!\n");
    return 0;
}