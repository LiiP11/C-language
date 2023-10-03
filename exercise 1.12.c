/* The ANSI C Programming Language: exercise 1-12 */
/* Write a program that prints its input one word per line. */
#include <stdio.h>

int main() {
    int c;
    int insideWord = 0;  // Flag to track whether we are inside a word.

    printf("Type a sentence:\t(Press 'CTRL + D' to exit)\n");

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (insideWord) {
                putchar('\n');
                insideWord = 0;
            }
        } else {
            putchar(c);
            insideWord = 1;
        }
    }

    return 0;
}