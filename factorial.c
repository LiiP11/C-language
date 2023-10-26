/* calculating the factorial of a number */
#include <stdio.h>

// Function to calculate the factorial of a number
int factorial(int value) {
    int result = 1;

    for (int i = value; i > 0; i--) {
        result *= i;

        if (i != value) {
            printf(" * %d", i);
        } else {
            printf("%d", i);
        }
    }

    printf("\n");
    return result;
}

int main() {
    int num;

    printf("================================\n");
    printf("\tFACTORIAL NUMBERS\n");
    printf("================================\n");
    printf("Enter a number: ");
    
    if (scanf("%d", &num) != 1 || num < 0) {
        printf("Invalid input. Please enter a non-negative integer.\n");
        return 1; // Exit with an error code
    }

    printf("\nFactorial: %d\n", factorial(num));

    return 0;
}