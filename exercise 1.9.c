/* The ANSI C Programming Language: exercise 1-9 */
/* Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank. */
#include <stdio.h>

int main() {
    int c;
    int prevChar = EOF; // Initialize prevChar to a value that won't match any character.

    printf("Type a sentence:\t(Press 'CTRL + D' to exit)\n");

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            if (prevChar != ' ') {
                putchar(c); // Output a single space only if the previous character was not a space.
            }
        } else {
            putchar(c);
        }
        prevChar = c; // Store the current character as the previous character for the next iteration.
    }

    return 0;
}