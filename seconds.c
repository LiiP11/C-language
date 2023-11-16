/* Convert seconds to hours, minutes and seconds */
#include <stdio.h>

int main() {
    int sec, hours, minutes, seconds, rem;

    printf("Enter the number of seconds: ");
    scanf("%d", &sec);

    hours = sec / 3600;
    rem = sec % 3600;
    minutes = rem / 60;
    seconds = rem % 60;

    printf("Time: %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}