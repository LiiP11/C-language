/* Count the number of words in a sentence */
#include <stdio.h>

int main() {
    char s[80];
    int i = 0, wordCount = 0;

    printf("Type a sentence: ");
    fgets(s, sizeof(s), stdin);

    while (s[i] != '\n' && s[i] != '\0') {
        while (s[i] == ' ') {
            i++; // Skip leading spaces
        }

        if (s[i] != '\n' && s[i] != '\0') {
            wordCount++; // Found a word

            while (s[i] != ' ' && s[i] != '\n' && s[i] != '\0') {
                i++; // Skip the rest of the word
            }
        }
    }

    printf("Total words: %d\n", wordCount);

    return 0;
}