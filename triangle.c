/* This code checks whether three input values can form a triangle and, if so, identifies the type of triangle (equilateral, isosceles, or scalene) */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Function to validate input as a number
bool isValidNumber(const char *str) {
    char *endptr;
    strtol(str, &endptr, 10); // Try converting to a long integer

    // Check if the conversion stopped at the end of the string
    return *endptr == '\0';
}

int main() {
    int sides[3];
    char input[20]; // Buffer to hold user input

    for (int i = 0; i < 3; i++) {
        printf("Enter the length of side %d: ", i + 1);

        // Validate input for numbers
        do {
            scanf("%19s", input); // Read input as string
            if (!isValidNumber(input)) {
                printf("Please enter a valid number for side %d: ", i + 1);
                while (getchar() != '\n'); // Clear input buffer
            }
        } while (!isValidNumber(input));

        sides[i] = atoi(input); // Convert validated input to integer
    }

    // Check if the sum of any two sides is greater than the third side
    if (sides[0] + sides[1] > sides[2] && sides[0] + sides[2] > sides[1] && sides[1] + sides[2] > sides[0]) {
        if (sides[0] == sides[1] && sides[0] == sides[2])
            printf("\nEquilateral Triangle\n"); // All sides are equal
        else if (sides[0] == sides[1] || sides[0] == sides[2] || sides[1] == sides[2])
            printf("\nIsosceles Triangle\n"); // Two sides are equal
        else
            printf("\nScalene Triangle\n"); // All sides are different
    } else {
        printf("\nThe three sides do not form a triangle.\n");
    }

    return 0;
}