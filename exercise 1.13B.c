/* The ANSI C Programming Language: exercise 1-13B */
/* Write a program to print a histogram of the lengths of words in its input. It is  easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging. */
#include <stdio.h>  
#define IN 1
#define OUT 0
#define MAX_WORD_LENGTH 50

int main() {
	int i, c, state, length, highest_length;
	int lengths[MAX_WORD_LENGTH];

	for ( i = 0; i < MAX_WORD_LENGTH; ++i) {
		lengths[i] = 0;
	}

	i = length = highest_length = 0;
	state = OUT;

	printf("Type a sentence:\t(Press 'CTRL + D' to exit)\n");

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			if (state == IN) {
				lengths[i] = length;
				++i;
				length = 0;
			}
			state = OUT;
		} else if (state == OUT) {
			state = IN;
		}

		if (state == IN)
			++length;

		// Print the histogram
		if (i == MAX_WORD_LENGTH) {
			// Find the highest length word
			for (i = 0; i < MAX_WORD_LENGTH; ++i) {
				if (lengths[i] > highest_length) {
					highest_length = lengths[i];
				}
			}

			// Actual routine
			while (highest_length > 0) {
				printf("%3d", highest_length);

				for (i = 0; i < MAX_WORD_LENGTH; ++i) {
					if (lengths[i] >= highest_length) {
					putchar('|');
					}

					if (lengths[i] < highest_length) {
						putchar(' ');
					}
					printf("%2c", ' ');
				}
				printf("\n");
				--highest_length;
			}

			printf("%4c", '|');

			for (i = 0; i < MAX_WORD_LENGTH; ++i) {
				printf("---");
			}

			printf("\n");
			printf("%1c", ' ');

			for (i = 0; i < MAX_WORD_LENGTH; ++i) {
				printf("%3d", lengths[i]);
			}

			printf("\n\n");

			// Reinitialize the lengths
			for (i = 0; i < MAX_WORD_LENGTH; ++i) {
				lengths[i] = 0;
			}
			i = 0;
		}
	}

	printf("\n");

	// Find the highest length word
	for (i = 0; lengths[i] > 0; ++i) {
		if (lengths[i] > highest_length) {
			highest_length = lengths[i];
		}
	}

	// Actual routine
	while (highest_length > 0) {
		printf("%3d", highest_length);

		for (i = 0; lengths[i] > 0; ++i) {
			if (lengths[i] >= highest_length) {
			putchar('|');
			}

			if (lengths[i] < highest_length) {
				putchar(' ');
			}
			printf("%2c", ' ');
		}
		printf("\n");
		--highest_length;
	}

	printf("%4c", '|');

	for (i = 0; lengths[i] > 0; ++i) {
		printf("---");
	}

	printf("\n");
	printf("%1c", ' ');

	for (i = 0; lengths[i]; ++i) {
		printf("%3d", lengths[i]);
	}

	printf("\n");
	return 0;
}