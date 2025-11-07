#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int top_value;
int topNumber, guess_work;
int numberOfTimesGuessed = 0;
int randomValue;

int main()
{
    printf("\nWelcome to KC python number guessing game/n\n");

    printf("\n\nEnter the limit value: ");
    scanf("%d", &top_value);

    srand(time(NULL));

    if (top_value < 0)
    {
        printf("\nEnter another number please, negatives are not allowed");
        exit(0);
    }
    else if (top_value == 0)
    {
        printf("\n\nEntered value is a zero, enter a positive value next time");
    }
    else
    {
        while (1)
        {
            printf("\nGuess the number: ");
            if (scanf("%d", guess_work) != 1)
            {
                printf("Invalid input, the value entered is not a number");
                while (getchar() != '\n')
                    ;
                continue;
            }
            randomValue = rand() % top_value + 1;
            if (randomValue == guess_work)
            {
                printf("\n\nWoooh, you have guessed the number after %d chances, you are lucky\n\n", numberOfTimesGuessed);
                exit(0);
            }
            else if (randomValue < guess_work)
            {
                printf("The number is greater than your guess, try again again your luck! :)\n");
            }
            else if (randomValue <= guess_work <= 0)
            {
                printf("The number is greater than your guess, try again again your luck! :)\n");
            }
            else
            {
                printf("The number is lower than your guess, try again again your luck! :)\n");
                numberOfTimesGuessed += 1;
            }
        }
    }

    return 0;
}