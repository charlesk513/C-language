#include <stdio.h>
#include <stdbool.h>

int score = 0;
char name[100];
float mark;
char answer;
char correct;

int main()
{
    printf("\nWelcome to Kc computer science quiz.\n");
    printf("\nEnter your name: ");
    scanf("%s", name);

    printf("\n\n1. Python programming language was created by?\n");
    printf("A. Charles Babbage\n");
    printf("B. Guido Van Rossum\n");
    printf("C. Ada B Loverace\n");
    printf("D. Dennis Ricchie\n");
    printf("\nEnter your answer: ");
    scanf(" %c", &answer);
    correct = 'B';
    if (answer.upper() == correct)
    {
        printf("\nCorrect!\n");
        score += 1;
    }
    else
    {
        printf("\nWrong option!, the correct answer is %c", correct);
    }
    printf("\n\n2. Which level of programming language is python?\n");
    printf("A. Low level\n");
    printf("B. Mid level\n");
    printf("C. High level\n");
    printf("D. None of the above\n");
    printf("Enter your answer: ");
    scanf(" %c", &answer);
    correct = 'C';
    if (answer.upper() == correct)
    {
        printf("\nCorrect!\n");
        score += 1;
    }
    else
    {
        printf("\nWrong option!, the correct answer is %c", correct);
    }

    printf("\n\n3. What is the memory hierachy in ascending order of speed?\n");
    printf("A. Main memory, cache, secondary memory, registers\n");
    printf("B. cache, main memory, registers, secondary memory\n");
    printf("C. register, cache, main memory, secondary memory\n");
    printf("D. secondary memory, main memory, cache, registers\n");
    printf("Enter your answer: ");
    scanf(" %c", &answer);
    correct = 'C';
    if (answer.upper() == correct)
    {
        printf("\nCorrect!\n");
        score += 1;
    }
    else
    {
        printf("\nWrong option!, the correct answer is %c", correct);
    }
    printf("\n\n4. Who among the personnel of political economy invented capitalism?\n");
    printf("A. Karl Marx\n");
    printf("B. Adam Smith\n");
    printf("C. Maynard Keynes\n");
    printf("D. John Stuart Mills\n");
    printf("\nEnter your answer: ");
    scanf(" %c", &answer);
    correct = 'B';
    if (answer.upper() == correct)
    {
        printf("\nCorrect!\n");
        score += 1;
    }
    else
    {
        printf("\nWrong option!, the correct answer is %c", correct);
    }
    printf("\n\n5. What is the order of Kotlers communication model?\n");
    printf("A. Sender, Decoder, media, Encoder, Receiver\n");
    printf("B. Sender, media, Encoder, Receiver, Decoder\n");
    printf("C. Encoder, Sender, media, Receiver, Decoder\n");
    printf("D. Sender, Encoder, media, Decoder, Receiver\n");
    printf("Enter your answer: ");
    scanf(" %c", &answer);
    correct = 'D';
    if (answer.upper() == correct)
    {
        printf("\nCorrect!\n");
        score += 1;
    }
    else
    {
        printf("Wrong option!, the correct answer is %c", correct);
    }
    printf("\n\n6. What are the different ways of proving expressions in discrete?");
    printf("A. Counterexample, Direct, contrapositive, induction");
    printf("B. Direct, counterexample, Probability, approximation");
    printf("C. Probability, Direct, Contradiction, Counterexample");
    printf("D. Approximation, Induction, Counterexample, Probability\n");
    printf("Enter your answer: ");
    scanf(" %c", &answer);
    correct = 'A';
    if (answer.upper() == correct)
    {
        printf("\nCorrect!\n");
        score += 1;
    }
    else
    {
        printf("\nWrong option!, the correct answer is %c", correct);
    }
    printf("\n\n7. What in of the following python containers represent a list?\n");
    printf("A. { 1:'age', 3.6:'Float', 'Joy':name}\n");
    printf("B. ( 1, 3.6, 'Joy', (1, 5);, 'Name')\n");
    printf("C. { 1, 3.6, 'Joy', (1, 5);, 'Name'}\n");
    printf("D. [ 1, 3.6, 'Joy', (1, 5);, 'Name']\n");
    printf("Enter your answer: ");
    scanf(" %c", &answer);
    correct = 'D';
    if (answer.upper() == correct)
    {
        printf("\nCorrect!\n");
        score += 1;
    }
    else
    {
        printf("\nWrong option!, the correct answer is %c", correct);
    }
    mark = (score / 7) * 100;
    printf("\n\n\nThe overall mark scored by %s is %d/7, which is %.2f% Congratulations\n\n", name, score, mark);

    return 0;
}
