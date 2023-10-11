/* The ANSI C Programming Language: exercise 1-19 */
/* Write a function reverse(s) that reverses the character string S. Use it to  write a program that reverses its input a line at a time. */
#include <stdio.h>
#include <string.h>

// Function to reverse a character string
void reverse(char *str) {
    int i, len;
    len = strlen(str);

    for (i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int main() {
    char line[50]; // Buffer size for a line of input
    
    printf("Type a sentence:\t(Press 'CTRL + D' to exit)\n");

    while (fgets(line, sizeof(line), stdin) != NULL) {
        // Remove the newline character from input
        size_t len = strlen(line);
        if (len > 0 && line[len - 1] == '\n') {
            line[len - 1] = '\0';
        }

        // Call reverse() function to reverse the line
        reverse(line);

        // Print the reversed line
        printf("%s\n", line);
    }

    return 0;
}