/* this code generates an array of 10 random numbers between 0 and 99 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

int main() {
    int num[SIZE];
    srand(time(NULL));

    // Generate and fill the array with random numbers
    for (int i = 0; i < SIZE; i++) {
        num[i] = rand() % 100;
    }

    // Print the generated numbers
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", num[i]);
    }

    printf("\n");

    return 0;
}