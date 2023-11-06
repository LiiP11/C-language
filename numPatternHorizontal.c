/* A triangular shaped number pattern - horizontal */
#include <stdio.h>

int main() {
    int num = 1;

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < i; j++) {
			num < 10 ? printf("0%d ", num++) : printf("%d ", num++);
        }
        printf("\n");
    }

    return 0;
}