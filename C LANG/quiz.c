#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Define a struct for questions
typedef struct {
    char question[100];
    char option1[50];
    char option2[50];
    char option3[50];
    char option4[50];
    int correctAnswer;
} Question;

// Function to display a question and get user's answer
int askQuestion(Question q) {
    printf("%s\n", q.question);
    printf("1. %s\n", q.option1);
    printf("2. %s\n", q.option2);
    printf("3. %s\n", q.option3);
    printf("4. %s\n", q.option4);
    int answer;
    printf("Enter your answer (1-4): ");
    scanf("%d", &answer);
    return answer;
}

int main() {
    srand(time(NULL)); // Seed random number generator

    // Define questions
    Question questions[] = {
        {"What is the capital of France?", "Berlin", "Paris", "London", "Rome", 2},
        {"Which planet is known as the Red Planet?", "Earth", "Mars", "Jupiter", "Saturn", 2},
        {"Who painted the Mona Lisa?", "Leonardo da Vinci", "Michelangelo", "Raphael", "Caravaggio", 1},
        {"What is the largest mammal?", "Elephant", "Blue whale", "Lion", "Giraffe", 2},
        {"What is the chemical symbol for gold?", "Ag", "Au", "Hg", "Pb", 2}
    };

    int numQuestions = sizeof(questions) / sizeof(questions[0]);
    int score = 0;

    // Ask questions in random order
    for (int i = 0; i < numQuestions; i++) {
        int randomIndex = rand() % numQuestions;
        Question temp = questions[i];
        questions[i] = questions[randomIndex];
        questions[randomIndex] = temp;
    }

    for (int i = 0; i < numQuestions; i++) {
        int answer = askQuestion(questions[i]);
        if (answer == questions[i].correctAnswer) {
            printf("Correct!\n\n");
            score++;
        } else {
            printf("Incorrect. The correct answer was %d.\n\n", questions[i].correctAnswer);
        }
    }

    printf("Your final score is %d/%d.\n", score, numQuestions);
    return 0;
}
