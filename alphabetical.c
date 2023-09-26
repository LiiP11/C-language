#include <stdio.h>
#include <string.h>

int main() {
	int i, j;
	int len = 3;
	char name[len][20], aux[20];

	printf("Type three random names:\n\n");

	for (i = 0; i < len; i++) {
		printf("%d° name: ",i + 1);
		scanf("%s", name[i]);
	}

	for (i = 0; i < len; i++) { 
		for (j = 1; j < len; j++) {
			if (strcmp(name[j - 1], name[j]) > 0) {
				strcpy(aux, name[j - 1]);
				strcpy(name[j - 1], name[j]);
				strcpy(name[j], aux);
			}
		}
	}

	printf("\nAphabetical order:\n\n");

	for (i = 0; i < len; i++) {
		printf("%d° name: %s\n", i + 1, name[i]);
	}

	return 0;
}