#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void guess(int N)
{
    int number, guess, numberofguess = 0;
    srand(time(NULL));
    number = rand() % N + 1;

    printf("Guess a number between 1 and %d\n", N);

    do
    {
        if (numberofguess > 9)
        {
            printf("\nYou Lose!\n");
            break;
        }
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if (guess > number)
        {
            printf("Lower number please!\n");
            numberofguess++;
        }
        else if (number > guess)
        {
            printf("Higher number please!\n");
            numberofguess++;
        }
        else
        {
            printf("You guessed the number in %d attempts!\n", numberofguess);
        }

    } while (guess != number);

    int main()
    {
        int N = 100;
        guess(N);
        return 0;
    }