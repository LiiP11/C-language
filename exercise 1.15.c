/* The ANSI C Programming Language: exercise 1-15 */
/* Rewrite the temperature conversion program of Section 1.2 to use a function for conversion. */ 
#include <stdio.h>

float celsiusToFahrenheit(float celsius) {
    return celsius * 1.8 + 32;
}

float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32) / 1.8;
}

int main() {
    float temperature;
    int choice;

    printf("===================================\n");
    printf("\tTEMPERATURE CONVERSION\n");
    printf("===================================\n");
    printf("1 - Celsius to Fahrenheit\n");
    printf("2 - Fahrenheit to Celsius\n");
    printf("\nChoose an option: ");
    scanf("%d", &choice);

    if (choice == 1 || choice == 2) {
        printf("Enter the temperature: ");
        scanf("%f", &temperature);

        if (choice == 1) {
            printf("\nCelsius: %.1f °C\nFahrenheit: %.1f °F\n", temperature, celsiusToFahrenheit(temperature));
        } else {
            printf("\nFahrenheit: %.1f °F\nCelsius: %.1f °C\n", temperature, fahrenheitToCelsius(temperature));
        }
    } else {
        printf("\nInvalid option.\n");
    }

    // Wait for user input before exiting
    getchar();

    return 0;
}