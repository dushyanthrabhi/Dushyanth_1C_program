#include <stdio.h>

int main() {
    int age;

    // Ask the user to enter their age
    printf("Enter your age: ");
    scanf("%d", &age);

    // If-else statement to classify the age as Younger or Adult
    if (age >= 13 && age <= 19) {
        printf("You are a Younger (Teenager).\n");
    } else if (age >= 20) {
        printf("You are an Adult.\n");
    } else {
        printf("You are a Child.\n");
    }

    return 0;
}
