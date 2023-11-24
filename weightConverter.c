#include <stdio.h>
#include <stdlib.h>

// Function to convert kilograms to pounds
float kgToPounds(float kg) {
    return kg * 2.2046;
}

// Function to convert pounds to kilograms
float poundsToKg(float pounds) {
    return pounds / 2.2046;
}

int main() {
    float input, converted;
    int choice;

    printf("==========================\n");
    printf("\tCONVERTER\n");
    printf("==========================\n");
    printf("1 - Kilograms to Pounds\n");
    printf("2 - Pounds to Kilograms\n");
    printf("\nChoose an option: ");
    
    if (scanf("%d", &choice) != 1) {
        printf("Invalid input. Please enter a number.\n");
        return 1;
    }

    if (choice != 1 && choice != 2) {
        printf("Invalid option. Please choose 1 or 2.\n");
        return 1;
    }

    printf("Enter the weight: ");
    if (scanf("%f", &input) != 1) {
        printf("Invalid input. Please enter a valid weight.\n");
        return 1;
    }

    if (choice == 1) {
        converted = kgToPounds(input);
        printf("%.1f Kg = %.1f Lbs\n", input, converted);
    } else {
        converted = poundsToKg(input);
        printf("%.1f Lbs = %.1f Kg\n", input, converted);
    }

    return 0;
}