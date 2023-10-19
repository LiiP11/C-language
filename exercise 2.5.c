/* The ANSI C Programming Language: exercise 2-5 */
/* Write the function any(s1,s2), which returns the first location in a string s1 where any character from the string s2 occurs, or -1 if s1 contains no characters from s2. (The standard library function strpbrk does the same job but returns a pointer to the location.) */
#include <stdio.h>

int any(char s1[], char s2[]);

int main() {
    char s1[] = "ola mundo";
    char s2[] = "a";

    int result = any(s1, s2);

    if (result != -1) {
        printf("Character found at index %d\n", result);
    } else {
        printf("No character from s2 found in s1\n");
    }

    return 0;
}

int any(char s1[], char s2[]) {
    int i, j;

    for (i = 0; s2[i] != '\0'; ++i) {
        for (j = 0; s1[j] != '\0'; ++j) {
            if (s1[j] == s2[i]) {
                return j; // Return the index where the character is found
            }
        }
    }

    return -1; // Return -1 if no character from s2 is found in s1
}