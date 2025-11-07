#include <stdio.h>
#include <stdbool.h>
//      int main() {
//     int citizenAge;
//     printf("\nEnter your age basing on your credentals on the ID: ");
//     scanf("%d", &citizenAge);

// we do not add any sign after if, else if, or else conditions just enclosing them in parenthesis

//     if (citizenAge>120 && citizenAge<=0) {
//         printf("\nInvalid age, go and rest. No vote for you\n");
//     }
//     else if(citizenAge >= 18) {
//     printf("\nYou are free to vote, nice time!\n");
//     }
//     else {
//         printf("\nGo to school and study, you are still a chick\n");
//     }
//     return 0;
// }

// exercise

// int main() {
//     double number;
//     printf("Enter the value: ");
//     scanf("%lf", &number);

//     if (number > 0) {
//         printf("The number is positive");
//     } else if (number < 0) {
//         printf("The number is negative");
//     } else {
//         printf("The number is 0");
//     }
//     return 0;
// }

// Ternary operator (this operator can be used instead of the if else statements) its a shortcut.

//     int age= 15;
//     (age >= 18) ? printf("You can vote!"): printf("You cannot vote, go to school!");
//     return 0;

// }

//     int number = 34;
//     if (number % 2 == 0)? printf("The number is even"): printf("The number is odd");
//     return 0;
// }

// // switch statement, this works like an if statement for conditions of any in[ut value expected
// int number;
// printf("Enter the number of the day from 1 to 7: ");
// scanf("%d", &number);

// switch(number) {
//     case 1:
//         printf("Sunday ");
//         break;

//     case 2:
//         printf("Monday ");
//         break;

//     case 3:
//         printf("Tuesday ");
//         break;

//     case 4:
//         printf("Wednesday ");
//         break;

//     case 5:
//         printf("Thursday ");
//         break;

//     case 6:
//         printf("Friday ");
//         break;

//     case 7:
//         printf("Saturday ");
//         break;

//     default:
//         printf("Invalid input.");
// }
//     return 0;
// }

// // we can also use switch statement to condition values with multiple values as shown below
// int number;
// printf("Enter the number of the day from 1 to 7: ");
// scanf("%d", &number);

// switch(number) {
//     case 2:
//     case 3:
//     case 4:
//     case 5:
//     case 6:
//         printf("Weekday");
//         break:

//     case 1:
//     case 2:
//         printf("Weekend");
//         break;

//     default:
//         printf("Invalid number");
// }

// return 0;
// }

// Exercise switch

int main()
{
    // int choice;
    // printf("\nEnter the number of the month ");
    // scanf("%d", &choice);
    // switch(choice) {
    //     case 1:
    //         printf("January");
    //         break;
    //     case 2:
    //         printf("February");
    //         break;
    //     case 3:
    //         printf("Match");
    //         break;
    //     case 4:
    //         printf("April");
    //         break;
    //     case 5:
    //         printf("May");
    //         break;
    //     case 6:
    //         printf("June");
    //         break;
    //     case 7:
    //         printf("July");
    //         break;
    //     case 8:
    //         printf("August");
    //         break;
    //     case 9:
    //         printf("September");
    //         break;
    //     case 10:
    //         printf("October");
    //         break;
    //     case 11:
    //         printf("November");
    //         break;
    //     case 12:
    //         printf("December");
    //         break;
    //     default:
    //         printf("That month doesnt exist on the gregorian calender");
    // }

    int a = 10;
    int b = 34;
    printf("Larger: %d\n", a > b ? a : b);
    return 0;
}