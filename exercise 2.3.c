/* The ANSI C Programming Language: exercise 2-3 */
/* Write a function atoi(s), which converts a string of hexadecimal digits (including an optional 0x or 0X) into its equivalent integer value. The allowable digits are 0 through 9, a through f, and A through F. */
#include <stdio.h>
#include <ctype.h>

int myAtoi(char s[]);

int main() {
    printf("%d\n", myAtoi("abc"));
    printf("%d\n", myAtoi("0X123"));
    printf("%d\n", myAtoi("0xabc123"));

    return 0;
}

// myAtoi converts the hexadecimal string s to an integer
int myAtoi(char s[]) {
    int i, ch;
    int result = 0;
    int index = 0;

    if (s[0] == '0' && (tolower(s[1]) == 'x')) {
        index = 2;
    }

    for (i = index; isxdigit(ch = tolower(s[i])); ++i) {
        if (isdigit(ch)) {
            result = 16 * result + (ch - '0');
        } else {
            result = 16 * result + (ch - 'a' + 10);
        }
    }

    return result;
}