#include <stdio.h>

int main() {
    int marks;

    // Ask the user to enter the marks
    printf("Enter the marks: ");
    scanf("%d", &marks);

    // Using if-else to determine the grade based on marks
    if (marks >= 90 && marks <= 100) {
        printf("Grade A\n");
    } else if (marks >= 80 && marks < 90) {
        printf("Grade B\n");
    } else if (marks >= 70 && marks < 80) {
        printf("Grade C\n");
    } else if (marks >= 60 && marks < 70) {
        printf("Grade D\n");
    } else if (marks >= 50 && marks < 60) {
        printf("Grade E\n");
    } else if (marks >= 0 && marks < 50) {
        printf("Grade F\n");
    } else {
