#include <stdio.h>

int main() {
    int num;

    // Ask the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // First level of the if statement to check if the number is positive, negative, or zero
    if (num > 0) {
        printf("The number is positive.\n");

        // Nested if statement to check if the positive number is even or odd
        if (num % 2 == 0) {
            printf("The number is even.\n");
        } else {
            printf("The number is odd.\n");
        }

    } else if (num < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }

    return 0;
}
