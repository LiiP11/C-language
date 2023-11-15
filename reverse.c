/* reverse a user-entered sentence */
#include <stdio.h>
#include <string.h>

int main() {
    char text[50], textinv[50];
    int i, j, end;

    printf("Type a sentence: ");
    fgets(text, sizeof(text), stdin);

    // Remove newline character if present
    end = strlen(text);

    if (end > 0 && text[end - 1] == '\n') {
        text[end - 1] = '\0';
        end--;
    }

    for (i = end - 1, j = 0; j < end; i--, j++) {
        textinv[j] = text[i];
    }

    textinv[end] = '\0';
    printf("Reverse: %s\n", textinv);

    return 0;
}