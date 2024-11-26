#include <stdio.h>

int main() {
    int num;

    // Ask the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Using if-else statement to check if the number is positive or negative
    if (num > 0) {
        printf("The number is positive.\n");
    } else {
        printf("The number is negative or zero.\n");
    }

    return 0;
}
