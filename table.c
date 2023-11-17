/* Prints a multiplication table from 1 to 10 */
#include <stdio.h>

int main() {
    int i, j, value;

    for (i = 1; i <= 10; i++) {
        for (j = 1; j <= 10; j++) {
            value = i * j;
            printf("%02d\t", value);
        }
        printf("\n");
    }

    return 0;
}