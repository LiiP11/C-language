#include <stdio.h>
#include <stdlib.h>
#define CONVERSION_RATE 5.05

/* Function to convert from Dollar to Real */
float convertToReal(float dollar) {
    return dollar * CONVERSION_RATE;
}

/* Function to convert from Real to Dollar */
float convertToDollar(float real) {
    return real / CONVERSION_RATE;
}

int main() {
    float amount;
    int choice;

    printf("===================================\n");
    printf("\tCURRENCY CONVERTER\n");
    printf("===================================\n");
    
    while (1) {
        printf("\n1 - Dollar to Real\t2 - Real to Dollar\n");
        printf("Enter your choice (1 or 2, 0 to exit): ");
        
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter 1, 2, or 0.\n");
            while (getchar() != '\n');  // Clear the input buffer
            continue;
        }

        if (choice == 0) {
            break;
        }

        if (choice != 1 && choice != 2) {
            printf("Invalid choice. Please enter 1 or 2.\n");
            continue;
        }

        printf("Enter the amount: ");
        if (scanf("%f", &amount) != 1) {
            printf("Invalid input. Please enter a numeric value.\n");
            while (getchar() != '\n');
            continue;
        }

        if (choice == 1) {
            printf("\nDollar: %.2f $\nReal: %.2f R$\n", amount, convertToReal(amount));
        } else {
            printf("\nReal: %.2f R$\nDollar: %.2f $\n", amount, convertToDollar(amount));
        }
    }

    return 0;
}