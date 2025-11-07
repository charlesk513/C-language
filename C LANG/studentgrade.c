#include <stdio.h>
#include <stdbool.h>

// Define a struct for student information
typedef struct {
    char name[50];
    float marks;
    char grade;
} Student;

// Function to calculate grade based on marks
char calculateGrade(float marks) {
    if (marks >= 80) {
        return 'A';
    } else if (marks >= 70) {
        return 'B';
    } else if (marks >= 60) {
        return 'C';
    } else if (marks >= 45) {
        return 'D';
    } else if (marks >= 35) {
        return 'E';
    } else {
        return 'F';
    }
}

int main() {
    int numStudents;
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    Student students[numStudents];

    // Input student information
    for (int i = 0; i < numStudents; i++) {
        printf("Enter student %d's name: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter student %d's marks: ", i + 1);
        scanf("%f", &students[i].marks);
        students[i].grade = calculateGrade(students[i].marks);
    }

    // Display student information
    printf("\nStudent Grades:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("Grade: %c\n\n", students[i].grade);
    }
    return 0;
}