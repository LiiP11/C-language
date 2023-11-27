/* This code is designed to swap the values of two variables (x and y) without using a temporary variable using bitwise XOR operations */
#include <stdio.h>

int main() {
    int x = 0x11234567;
    int y = 0x89abcdef;

    printf("Before swapping:\n");
    printf("x: 0x%x\t y: 0x%x\n", x, y);

    // Swap x and y using bitwise XOR
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;

    printf("\nAfter swapping:\n");
    printf("x: 0x%x\t y: 0x%x\n", x, y);

    return 0;
}