#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PATIENTS 99
#define MAX_STRING_LENGTH 30
#define MAX_CPF_LENGTH 15

struct Patient {
    int code;
    char name[MAX_STRING_LENGTH];
    char cpf[MAX_CPF_LENGTH];
    char vaccine[MAX_STRING_LENGTH];
    char date[MAX_CPF_LENGTH];
};

void clearBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    struct Patient patients[MAX_PATIENTS];
    int count = 0;
    int choice;

    do {
        printf("==============================\n");
        printf("\tVACCINE REGISTRATION\n");
        printf("==============================\n");
        printf("1 - Register Vaccine\n");
        printf("2 - List Applications\n");
        printf("3 - Search by CPF\n");
        printf("4 - Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        clearBuffer(); // Clear input buffer

        switch (choice) {
            case 1:
                if (count < MAX_PATIENTS) {
                    printf("Enter name: ");
                    fgets(patients[count].name, sizeof(patients[count].name), stdin);
                    patients[count].name[strcspn(patients[count].name, "\n")] = '\0'; // Remove newline

					printf("Enter CPF: ");
                    fgets(patients[count].cpf, sizeof(patients[count].cpf), stdin);
                    patients[count].cpf[strcspn(patients[count].cpf, "\n")] = '\0';

					printf("Enter the vaccine name: ");
					fgets(patients[count].vaccine, sizeof(patients[count].vaccine), stdin);
					patients[count].vaccine[strcspn(patients[count].vaccine, "\n")] = '\0';

					printf("Vaccination date: ");
					fgets(patients[count].date, sizeof(patients[count].date), stdin);
					patients[count].date[strcspn(patients[count].date, "\n")] = '\0';

                    patients[count].code = count + 1;
                    count++;
                } else {
                    printf("Maximum number of patients reached.\n");
                }

				getchar();
				system("clear");
                break;

            case 2:
                printf("List of Applications:\n");

				for (int i = 0; i < count; i++) {
                    printf("==============================\n");
                    printf("Code: %d\n", patients[i].code);
                    printf("Name: %s\n", patients[i].name);
                    printf("CPF: %s\n", patients[i].cpf);
					printf("Vaccine name: %s\n", patients[i].vaccine);
					printf("Vaccination date: %s\n", patients[i].date);
                }

				getchar();
				system("clear");
                break;

            case 3:
                char searchCPF[MAX_CPF_LENGTH];
                printf("Enter CPF to search: ");
                fgets(searchCPF, sizeof(searchCPF), stdin);
                searchCPF[strcspn(searchCPF, "\n")] = '\0';

				int found = 0;

                for (int i = 0; i < count; i++) {
                    if (strcmp(searchCPF, patients[i].cpf) == 0) {
                        printf("Patient Found:\n");
                        printf("==============================\n");
                        printf("Code: %d\n", patients[i].code);
                        printf("Name: %s\n", patients[i].name);
                        printf("CPF: %s\n", patients[i].cpf);
						printf("Vaccine name: %s\n", patients[i].vaccine);
						printf("Vaccination date: %s\n", patients[i].date);
                        found = 1;
                        getchar();
                        break;
                    }
                }

                if (!found) {
                    printf("Patient with CPF %s not found.\n", searchCPF);
                }

				getchar();
				system("clear");
                break;

            case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    } while (choice != 4);

    return 0;
}