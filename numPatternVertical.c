/* A triangular shaped number pattern - vertical */
#include <stdio.h>

int main() {
	int length = 6;

	for (int i = 0; i < length; i++) {
        int diff = length - 3;
		int count = i;

        for (int j = 0; j < i; j++) {
			count < 10 ? printf("0%d ", count++) : printf("%d ", count++);

            count += diff;
            diff--;

            if (j < i) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}