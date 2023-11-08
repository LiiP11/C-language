/* Sort a vector of integers using the bubble sort algorithm */
#include <stdio.h>
#include <stdbool.h>

int main() {
    int num[5];
    int i, j, aux;
    bool validInput;

    // Input phase
    for (i = 0; i < 5; i++) {
        validInput = false;

        while (!validInput) {
            printf("Enter the %d° number: ", i + 1);

            if (scanf("%d", &num[i]) == 1) {
                validInput = true;
            } else {
                // Clear the input buffer
                while (getchar() != '\n');
                printf("Invalid input. Please enter an integer.\n");
            }
        }
    }

    // Bubble sort algorithm
    for (i = 0; i < 4; i++) {
        for (j = i + 1; j < 5; j++) {
            if (num[i] > num[j]) {
                // Swap the elements
                aux = num[i];
                num[i] = num[j];
                num[j] = aux;
            }
        }
    }

    // Output phase
    printf("\nOrdered Numbers:\n");

    for (i = 0; i < 5; i++) {
        printf("%d ", num[i]);
    }
    printf("\n");

    return 0;
}