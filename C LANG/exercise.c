#include <stdio.h>
#include <string.h>

// number2
// int permission = 0;
// int fuel;
// char comment[10];
// while (permission)
// {

//     printf("Enter the amount of fuel used soffer: ");
//     scanf("%d", &fuel);

//     if (fuel > 0 && fuel < 100)
//     {
//         comment[10] = "low";
//         printf("%s", comment);
//     }

//     else if (fuel > 100 && fuel < 500)
//     {
//         comment[10] = "Medium";
//         printf("%s", comment);
//     }

//     else if (fuel > 500)
//     {
//         comment[10] = "High";
//         printf("%s", comment);
//     }
// }

// number 2
// // (a)
// float expense;
// printf("Enter weekly fuel expense: ");
// scanf("%f", &expense);

// while (expense <= 100)
// {
//   printf("Expense must be greater than 100. Enter again: ");
//   scanf("%f", &expense);
// }
// printf("Valid expense recorded: %.2f\n", expense);

// // (b)
// // ... (after the while loop from part a)
// if (expense <= 100)
// {
//   printf("Category: Low\n");
// }
// else if (expense <= 500)
// {
//   printf("Category: Medium\n");
// }
// else
// {
//   printf("Category: High\n");
// }

// number 4
// // Function to find the category with the highest sales
// void findHighestSales(int textbooks, int stationery, int accessories)
// {
//     int highest = textbooks;
//     char category[50] = "Textbooks";

//     if (stationery > highest)
//     {
//         highest = stationery;
//         strcpy(category, "Stationery");
//     }
//     if (accessories > highest)
//     {
//         highest = accessories;
//         strcpy(category, "Computer Accessories");
//     }

//     // Display the result
//     printf("\n%s have the highest sales with %d units.\n", category, highest);
// }

// int main()
// {
//     int textSales, statSales, accSales;

//     // a. Prompt user for monthly sales for each category
//     printf("Enter sales for Textbooks: ");
//     scanf("%d", &textSales);
//     printf("Enter sales for Stationery: ");
//     scanf("%d", &statSales);
//     printf("Enter sales for Computer Accessories: ");
//     scanf("%d", &accSales);

//     // b. & c. Call function to find and display the highest sales
//     findHighestSales(textSales, statSales, accSales);

// number 5

char lang1[10], lang2[10];
int diff = 0;
int num1, num2, count;
char *ptr1;
char *ptr2;
*ptr1 = lang1[10];
*ptr2 = lang2[10];

void compareStrings(char lang1[], char lang2[])
{
  num1 = strlen(lang1);
  num2 = strlen(lang2);

  count = num1 > num2 ? num1 : num2;
  for (int i = 0; i < count; i++)
  {

    if (lang1[i] == lang2[i])
    {
    }
    else
    {
      diff++;
    }
  }
  printf("The different between the two strings is by %d letters", diff)
}

int main()
{
  printf("Enter the two languages: ");
  scanf("%s %s", lang1, lang2);

  compareStrings(lang1, lang2);

  return 0;
}
