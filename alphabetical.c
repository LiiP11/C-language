#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int len, i, j;

    printf("Enter the number of names: ");
    scanf("%d", &len);

    // Consume the newline character left in the input buffer
    while (getchar() != '\n');

    // Dynamically allocate memory for an array of strings
    char** names = (char**)malloc(len * sizeof(char*));

    if (names == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    for (i = 0; i < len; i++) {
        names[i] = (char*)malloc(256 * sizeof(char)); // Assuming a maximum of 255 characters per name
        if (names[i] == NULL) {
            fprintf(stderr, "Memory allocation failed\n");
            return 1;
        }

        printf("%d° name: ", i + 1);
        fgets(names[i], 255, stdin);

        // Remove the newline character at the end of the input
        names[i][strcspn(names[i], "\n")] = '\0';
    }

    // Perform bubble sort on the names
    for (i = 0; i < len - 1; i++) {
        for (j = 0; j < len - i - 1; j++) {
            if (strcmp(names[j], names[j + 1]) > 0) {
                char* temp = names[j];
                names[j] = names[j + 1];
                names[j + 1] = temp;
            }
        }
    }

    printf("\nAlphabetical order:\n\n");

    for (i = 0; i < len; i++) {
        printf("%d° name: %s\n", i + 1, names[i]);
    }

    // Free dynamically allocated memory
    for (i = 0; i < len; i++) {
        free(names[i]);
    }
    free(names);

    return 0;
}