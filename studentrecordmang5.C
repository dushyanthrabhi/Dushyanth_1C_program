#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100
#define NAME_LENGTH 50

typedef struct {
    int rollNumber;
    char name[NAME_LENGTH];
    float marks;
} Student;

Student students[MAX_STUDENTS];
int studentCount = 0;

void addStudent() {
    if (studentCount >= MAX_STUDENTS) {
        printf("Student database is full! Cannot add more students.\n");
        return;
    }

    printf("Enter Roll Number: ");
    scanf("%d", &students[studentCount].rollNumber);
    getchar(); // Consume newline character

    printf("Enter Name: ");
    fgets(students[studentCount].name, NAME_LENGTH, stdin);
    students[studentCount].name[strcspn(students[studentCount].name, "\n")] = '\0'; // Remove newline

    printf("Enter Marks: ");
    scanf("%f", &students[studentCount].marks);

    studentCount++;
    printf("Student added successfully!\n");
}

void listStudents() {
    if (studentCount == 0) {
        printf("No students in the database.\n");
        return;
    }

    printf("\nList of Students:\n");
    for (int i = 0; i < studentCount; i++) {
        printf("Roll Number: %d, Name: %s, Marks: %.2f\n",
               students[i].rollNumber, students[i].name, students[i].marks);
    }
}

void searchStudent() {
    int searchRoll;
    printf("Enter Roll Number to search: ");
    scanf("%d", &searchRoll);

    for (int i = 0; i < studentCount; i++) {
        if (students[i].rollNumber == searchRoll) {
            printf("Student Found: Roll Number: %d, Name: %s, Marks: %.2f\n",
                   students[i].rollNumber, students[i].name, students[i].marks);
            return;
        }
    }

    printf("Student with Roll Number %d not found.\n", searchRoll);
}

void menu() {
    printf("\nStudent Information System\n");
    printf("1. Add Student\n");
    printf("2. List Students\n");
    printf("3. Search Student\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
}

int main() {
    int choice;

    do {
        menu();
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                listStudents();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}
