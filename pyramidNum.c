/* prints a pyramid-shaped pattern of numbers */
#include <stdio.h>

int main() {
    int i, j, m, k, l;

    for (i = 1; i <= 5; i++) {
        // Loop to print leading spaces
        for (j = 1; j <= 5 - i; j++) {
            printf(" ");
        }

        m = 1; // Initialize the variable to be printed

        // Loop to print incrementing numbers
        for (k = 1; k <= i; k++) {
            printf("%d", m++);
        }

        m -= 2;

        // Loop to print decrementing numbers
        for (l = 1; l < i; l++) {
            printf("%d", m--);
        }

        printf("\n");
    }

    return 0;
}