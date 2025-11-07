#include <stdio.h>
#include <stdlib.h>

int main()
{
    int selection;
    int price;
    int amount;

    // welcome to vending machine preoject//
    printf("Select an item: \n");
    printf("1. Soda       - 1500 UGX\n");
    printf("2. Water     - 1000 UGX\n");
    printf("3. Juice     - 2000 UGX\n");
    printf("4. Crisps    - 1200 UGX\n");
    printf("5. Chocolate - 2500 UGX\n");

    int item_number;
    int credit;
    int quantity;
    int change;
    int mum_of_notes;
    int number_of_coins;
    // Prompt the user for item number
    printf("\nEnter item number: ");
    scanf("%d", &item_number);
    // Prompt the user for item quantity
    printf("\nEnter item quantity: ");
    scanf("%d", &quantity);
    // Prompt the user to insert the amount//
    printf("\nEnter your money: ");
    scanf("%d", &credit);
    // Get the price of the selected item
    if (quantity >= 1 && item_number <= 4)
    {
        // int price = (price[item_number - 1]);
        // Adjust index since array is 0-based
    }
    else
    {
        printf("Invalid item number.\n");
        return 1;
    }
    // Compare credit with the price
    if (credit < price)
    {
        printf("Insufficient funds. Please add more money.\n");
    }
    if (credit == price)
    {
        printf("Comfirm purchase.\n");
    }
    else
        (credit > price);
    {
        printf("Dispense item. Your change is %d UGX.\n", credit - price);
        return 0;
    }
    switch (change)
    {

    case 1:
        number_of_notes = change / 50000;
        change = change - (number_of_notes * 50000);
        printf("Change = %d\n", change);
        break;
    case 2:
        number_of_notes = change / 20000;
        change = change - (number_of_notes * 20000);
        printf("Change = %d\n", change);
        break;
    case 3:
        number_of_notes = change / 10000;
        change = change - (number_of_notes * 10000);
        printf("Change = %d\n", change);
    case 4:
        number_of_notes = change / 5000;
        change = change - (number_of_notes * 5000);
        printf("Change = %d\n", change);
        break;
    case 5:
        number_of_notes = change / 2000;
        change = change - (number_of_notes * 2000);
        printf("Change = %d\n", change);
        break;
    case 6:
        number_of_notes = change / 1000;
        change = change - (number_of_notes * 1000);
        printf("Change = %d\n", change);
        break;
    case 7:
        number_of_coins = change / 500;
        change = change - (number_of_coins * 500);
        printf("Change = %d\n", change);
        break;
    case 8:
        number_of_coins = change / 200;
        change = change - (number_of_coins * 200);
        printf("Change = %d\n", change);
        break;
    case 9:
        number_of_coins = change / 100;
        change = change - (number_of_coins * 100);
        printf("Change = %d\n", change);
        break;
    case 10:
        number_of_coins = change / 50;
        change = change - (number_of_coins * 50);
        printf("Change = %d\n", change);
        break;
    }
    return 0;
}