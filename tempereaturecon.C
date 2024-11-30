#include <stdio.h>
void celsiustofahrenheit(float celsius){
    float fahrenheit = (celsius*9/5)+32;
    printf("%.2f celsius = %.2f fahrenheit\n",celsius,fahrenheit);
}

void fahrenhetitocelsius(float fahrenheit) {
    float celsius =(fahrenheit -32)*5/9;
    printf("%.2f fahrenheit = %.2f celsius\n", fahrenheit, celsius);
}

int main() {
    int choice;
    float temperature;
    printf("temperature conversion program\n");
    printf("1. convert celsius to fahrenheit\n");
    printf("2. convert fahrenhhit to celsius\n");
    printf("enter your choice (1 or 2):");
    scanf("%d",&choice);
    
    if (choice == 1) {
        printf("enter temperature in celsius:");
        scanf("%f",&temperature);
        fahrenheitTocelsius(temperature);
    } else {
        printf("invalid choice.please select 1 or 2.\n");
    }
    return 0;
}
