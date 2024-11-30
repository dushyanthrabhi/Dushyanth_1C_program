#include <stdio.h>

void showMenu() {
    printf("Unit Converter\n");
    printf("1. Meters to Kilometers\n");
    printf("2. Kilometers to Meters\n");
    printf("3. Meters to Feet\n");
    printf("4. Feet to Meters\n");
    printf("5. Inches to Meters\n");
    printf("6. Meters to Inches\n");
    printf("Enter your choice: ");
}

int main() {
    int choice;
    float input, result;

    showMenu();
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter value in meters: ");
            scanf("%f", &input);
            result = input / 1000; // 1 kilometer = 1000 meters
            printf("%.2f meters = %.2f kilometers\n", input, result);
            break;
        case 2:
            printf("Enter value in kilometers: ");
            scanf("%f", &input);
            result = input * 1000; // 1 kilometer = 1000 meters
            printf("%.2f kilometers = %.2f meters\n", input, result);
            break;
        case 3:
            printf("Enter value in meters: ");
            scanf("%f", &input);
            result = input * 3.28084; // 1 meter = 3.28084 feet
            printf("%.2f meters = %.2f feet\n", input, result);
            break;
        case 4:
            printf("Enter value in feet: ");
            scanf("%f", &input);
            result = input / 3.28084; // 1 foot = 0.3048 meters
            printf("%.2f feet = %.2f meters\n", input, result);
            break;
        case 5:
            printf("Enter value in inches: ");
            scanf("%f", &input);
            result = input * 0.0254; // 1 inch = 0.0254 meters
            printf("%.2f inches = %.2f meters\n", input, result);
            break;
        case 6:
            printf("Enter value in meters: ");
            scanf("%f", &input);
            result = input / 0.0254; // 1 meter = 39.3701 inches
            printf("%.2f meters = %.2f inches\n", input, result);
            break;
        default:
            printf("Invalid choice. Please restart the program.\n");
    }

    return 0;
}
