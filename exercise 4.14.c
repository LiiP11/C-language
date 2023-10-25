/* The ANSI C Programming Language: exercise 4-14 */
/* In a two's complement number representation, our version of itoa does not handle the largest negative number, that is, the value of n equal to -(2wordsize-1). Explain why not. Modify it to print that value correctly, regardless of the machine on which it runs. */
#include <stdio.h>
#define swap(t, x, y) { t temp = x; x = y; y = temp; }

int main() {
    char *x = "hello", *y = "world";

    printf("Before swap\tx: %s\ty: %s\n", x, y);
    swap(char *, x, y);
    printf("After swap\tx: %s\ty: %s\n", x, y);

    return 0;
}