/* The ANSI C Programming Language: exercise 2-10 */
/* Rewrite the function lower, which converts upper case letters to lower case, with a conditional expression instead of if-else. */
#include <stdio.h>

int lower(int c);

int main() {
	char s[50];
	int i;

	printf("Type a sentence:\n");
	fgets(s,50,stdin);

	for (i = 0; s[i] != '\0'; ++i) {
		printf("%c", lower(s[i]));
	}

	return 0;
}

int lower(int c) {
	return c >= 'A' && c <= 'Z' ? c + 'a' - 'A' : c;
}