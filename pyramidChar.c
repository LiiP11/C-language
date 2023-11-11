/* prints a pyramid-shaped letter pattern */
#include <stdio.h>

int main() {
    int i, j, k, l;

    for (i = 1; i <= 5; i++) {
        // Loop to print leading spaces
        for (j = 1; j <= 5 - i; j++) {
            printf(" ");
        }

        char m = 'A'; // Initialize the variable to be printed

        // Loop to print incrementing letters
        for (k = 1; k <= i; k++) {
            printf("%c", m++);
        }

        m -= 2;

        // Loop to print decrementing letters
        for (l = 1; l < i; l++) {
            printf("%c", m--);
        }

        printf("\n");
    }

    return 0;
}