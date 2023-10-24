/* The ANSI C Programming Language: exercise 3-3 */
/* Write a function expand(s1,s2) that expands shorthand notations like a-z in the string s1 into the equivalent complete list abc...xyz in s2. Allow for letters of either case and digits, and be prepared to handle cases like a-b-c and a-z0-9 and -a-z. Arrange that a leading or trailing - is taken literally. */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define SIZE 200

void expand(char s1[], char s2[]);

int main() {
    char s1[] = "| a-z | 0-9 |";
    char s2[SIZE];

    printf("Original string: %s\n", s1);
    expand(s1, s2);
    printf("Expanded string: %s\n", s2);
    return 0;
}

void expand(char s1[], char s2[]) {
    size_t i, j;
    char c;

    s2[0] = s1[0];
    j = 1;

    for (i = 1; i < strlen(s1) - 1; ++i) {
        if (s1[i] == '-' && ((isalpha(s1[i - 1]) && isalpha(s1[i + 1])) || (isdigit(s1[i - 1]) && isdigit(s1[i + 1])))) {
            if (s1[i - 1] < s1[i + 1]) {
                for (c = s1[i - 1] + 1; c < s1[i + 1]; ++c) {
                    s2[j++] = c;
                }
            } else {
                s2[j++] = s1[i]; // Handle cases like 'z-a' or '9-0' where the range is empty. 
            }
        } else {
            s2[j++] = s1[i];
        }
    }

    s2[j++] = s1[i]; // Copy the last character
    s2[j] = '\0';
}