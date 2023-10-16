/* The ANSI C Programming Language: exercise 2-2 */
/* Write a loop equivalent to the for loop above without using && or || */
#include <stdio.h>
#define MAX_STRING_LENGTH 100

int main() {
	int c;
	int i = 0, lim = MAX_STRING_LENGTH;
	char s[MAX_STRING_LENGTH];

	printf("Type a sentence:\n");

	while (i < (lim - 1)) {
		c = getchar();

		if (c == EOF || c == '\n') {
            break; // Exit the loop on EOF or newline
        }

		s[i++] = c;
	}

	s[i] = '\0';   // Terminate the string
	printf("%s: %d\n", s, i);

	return 0;
}