#include <stdio.h>
#include <stdlib.h>

void conditions(user_guess, comp_guess)
{
    if (user_guess == rock || comp_guess == scissors)
    {
        printf("You won, the computer picked scissors");
    }
    else if (user_guess == rock || comp_guess == paper)
    {
        printf("You won, the computer picked paper");
    }
    else if (user_guess == paper || comp_guess == scissors)
    {
        printf("You won, the computer picked scissors");
    }
    else if (user_guess == comp_guess)
    {
        printf("A tie, you both picked %s", user_guess);
    }
    else
    {
        printf("You lost to the computer, it picked %s", comp_guess);
    }
}