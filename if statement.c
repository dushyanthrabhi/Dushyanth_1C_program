#include <stdio.h>

int main() {
    int num;

    // Ask the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Simple if statement to check if the number is positive
    if (num > 0) {
        printf("The number is positive.\n");
    }

    return 0;
}
