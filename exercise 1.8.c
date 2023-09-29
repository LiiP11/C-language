/* The ANSI C Programming Language: exercise 1-8 */
/* Write a program to count blanks, tabs, and newlines */
#include <stdio.h>

int main() {
    int c, lines = 0, tabs = 0, blanks = 0;

    printf("Type a sentence:\t(Press 'CTRL + D' to exit)\n");

    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            ++lines;
        } else if (c == '\t') {
            ++tabs;
        } else if (c == ' ') {
            ++blanks;
        }
    }

    printf("\nLines: %d\nTabs: %d\nBlanks: %d\n", lines, tabs, blanks);
    return 0;
}