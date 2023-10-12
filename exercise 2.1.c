/* The ANSI C Programming Language: exercise 2-1 */
/* Write a program to determine the ranges of char, short, int, and long variables, both signed and unsigned, by printing appropriate values from standard headers  and by direct computation. Harder if you compute them: determine the ranges of the various  floating-point types. */
#include <stdio.h>
#include <float.h>
#include <limits.h>

int main() {
    printf("signed CHAR: \t\t %d, %d\n", SCHAR_MIN, SCHAR_MAX);
    printf("signed SHORT INT: \t %hd, %hd\n", SHRT_MIN, SHRT_MAX);
    printf("signed INT: \t\t %d, %d\n", INT_MIN, INT_MAX);
    printf("signed LONG INT:\t %ld, %ld\n\n", LONG_MIN, LONG_MAX);

    printf("unsigned CHAR: \t\t 0, %u\n", UCHAR_MAX);
    printf("unsigned SHORT INT: \t 0, %hu\n", USHRT_MAX);
    printf("unsigned INT: \t\t 0, %u\n", UINT_MAX);
    printf("unsigned LONG INT:\t 0, %lu\n\n", ULONG_MAX);

    printf("FLOAT: \t\t %e, %e\n", FLT_MIN, FLT_MAX);
    printf("DOUBLE: \t %e, %e\n", DBL_MIN, DBL_MAX);
    printf("LONG DOUBLE:\t %Le, %Le\n", LDBL_MIN, LDBL_MAX);

    return 0;
}