/* Calculate the sum of natural numbers up to a certain value */
#include <stdio.h>

int terminal(int value) {
    int sum = 0;

    for (int i = 1; i <= value; i++) {
        if (i != value) {
            printf("%d + ", i);
        } else {
            printf("%d", i);
            printf("\n");
        }
        sum += i;
    }
    return sum;
}

int main() {
    int num;

    printf("================================\n");
    printf("\tTERMINAL NUMBERS\n");
    printf("================================\n");
    printf("Type a number: ");
    scanf("%d", &num);
    printf("\n");

    printf("\nTerminal: %d\n", terminal(num));

    return 0;
}