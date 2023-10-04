/* The ANSI C Programming Language: exercise 1-13A */
/* Write a program to print a histogram of the lengths of words in its input. It is  easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging. */
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
            putchar('=');
            insideWord = 1;
        }
    }

    return 0;
}