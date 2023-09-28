/* The ANSI C Programming Language: exercise 1-3 */
/* Modify the temperature conversion program to print a heading above the table */
#include <stdio.h>

int main() {
    int fahr, celsius;
    int lower = 0;		// Lower limit of temperature scale
    int upper = 200;    // Upper limit
    int step = 20;		// Step size

    printf("Fahrenheit\tCelsius\n");

    for (fahr = lower; fahr <= upper; fahr += step) {
        celsius = 5 * (fahr - 32) / 9;
        printf("%3d\t\t%6d\n", fahr, celsius);
    }

    return 0;
}