#include <stdio.h>
#include <string.h>

int main() {
    char word[50], copy[50];
    int len, dif = 0, j = 0;

    printf("Type a sentence: ");
    scanf(" %49[^\n]", word); // Added a space before %49 to skip leading whitespace

    // Remove special characters and spaces
    for (int i = 0; i < strlen(word); i++) {
        if (word[i] != '!' && word[i] != '?' && word[i] != ' ' && word[i] != '.') {
            copy[j++] = word[i];
        }
    }

    copy[j] = '\0';

    printf("Original: %s\nCopy: %s\n", word, copy);

    len = strlen(copy);
    len--;

    // Check for a palindrome
    for (int i = 0; i < len; i++) { // Changed strlen(copy) to len in the loop condition
        if (copy[i] != copy[len]) {
            dif++;
            break; // Added a break to exit early when a difference is found
        }
        len--;
    }

    if (dif == 0) {
        printf("\nIs a palindrome\n");
    } else {
        printf("\nIsn't a palindrome\n");
    }

    return 0;
}