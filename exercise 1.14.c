/* The ANSI C Programming Language: exercise 1-14 */
/* Write a program to print a histogram of the frequencies of different characters in its input. */
#include <stdio.h>
#include <ctype.h> // For isprint function
#include <stdlib.h> // For dynamic memory allocation

// Define constants
#define ASCII_CHAR_SET_SIZE 128

int main() {
    int c, i, reference = 0;
    int *ncharacters = (int *)calloc(ASCII_CHAR_SET_SIZE, sizeof(int));

    if (ncharacters == NULL) {
        fprintf(stderr, "Memory allocation failed.\n");
        return 1; // Exit with an error code
    }

    printf("Type a sentence:\t(Press 'CTRL + D' to exit)\n");

    while ((c = getchar()) != EOF) {
        if (c >= 0 && c < ASCII_CHAR_SET_SIZE) {
            ++ncharacters[c];
            if (ncharacters[c] > reference) {
                reference = ncharacters[c];
            }
        }
    }

    // Routine for creating the vertical histogram
    for (i = reference; i > 0; --i) {
        putchar(' ');

        for (c = 0; c < ASCII_CHAR_SET_SIZE; ++c) {
            if (ncharacters[c] > 0) {
                if (ncharacters[c] >= i) {
                    putchar('|');
                } else {
                    putchar(' ');
                }
                putchar('\t');
            }
        }

        printf("\n");
    }

    // Label on the x-axis
	for (c = 0; c < ASCII_CHAR_SET_SIZE; ++c) {
		if (ncharacters[c] > 0) {
			if (isprint(c)) {
				putchar(c);
			} else {
				switch (c) {
					case ' ':
						printf("BS"); // Space
						break;
					case '\t':
						printf("HT"); // Tab
						break;
					case '\n':
						printf("LF"); // Newline
						break;
					default:
						printf("%2c", c);
				}
			}
			putchar('\t');
		}
	}

    printf("\n");

    // Free dynamically allocated memory
    free(ncharacters);

    return 0;
}