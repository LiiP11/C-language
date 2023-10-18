/* The ANSI C Programming Language: exercise 2-4 */
/* Write an alternative version of squeeze(s1,s2) that deletes each character in s1 that matches any character in the string s2. */
#include <stdio.h>
#include <string.h>
#define MAX_S1_SIZE 80
#define MAX_S2_SIZE 26

void removeMatchingCharacters(char s1[], const char s2[]);

int main() {
    char s1[MAX_S1_SIZE];
    char s2[MAX_S2_SIZE];

    printf("Type a sentence: ");
    fgets(s1, sizeof(s1), stdin);

    printf("Which letters do you want to remove: ");
    fgets(s2, sizeof(s2), stdin);

    // Remove newline characters from input strings
    s1[strcspn(s1, "\n")] = '\0';
    s2[strcspn(s2, "\n")] = '\0';

    removeMatchingCharacters(s1, s2);
    printf("%s\n", s1);

    return 0;
}

void removeMatchingCharacters(char s1[], const char s2[]) {
    int i, j, k;

    for (k = 0; s2[k] != '\0'; k++) {
        for (i = j = 0; s1[i] != '\0'; i++) {
            if (s1[i] != s2[k]) {
                s1[j++] = s1[i];
            }
        }
        s1[j] = '\0';
    }
}