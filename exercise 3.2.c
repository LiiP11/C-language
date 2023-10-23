/* The ANSI C Programming Language: exercise 3-2 */
/* Write a function escape(s,t) that converts characters like newline and tab into visible escape sequences like \n and \t as it copies the string t to s. Use a switch. Write a function for the other direction as well, converting escape sequences into the real characters. */
#include <stdio.h>
#define SIZE 100

void escape(char s[], char t[]);
void unescape(char s[], char t[]);

int main() {
    char s[SIZE];
    char t[SIZE];
    int i = 0;
    int c;

    printf("Type a sentence: ");

    while ((c = getchar()) != '\n') {
        t[i] = c;
        ++i;
    }
    t[i++] = '\n';
    t[i] = '\0';

    escape(s, t);
    printf("Escaped string: %s\n", s);

    unescape(t, s);
    printf("Original string: %s\n", t);

    return 0;
}

void escape(char s[], char t[]) {
    int i, j;

    for (i = j = 0; t[i] != '\0'; ++i) {
        switch (t[i]) {
            case '\n':
                s[j++] = '\\';
                s[j++] = 'n';
                break;

            case '\t':
                s[j++] = '\\';
                s[j++] = 't';
                break;

            default:
                s[j++] = t[i];
                break;
        }
    }
    s[j] = '\0';
}

void unescape(char s[], char t[]) {
    int i, j;

    for (i = j = 0; s[i] != '\0'; ++i) {
        if (s[i] == '\\') {
            switch (s[++i]) {
                case 'n':
                    t[j++] = '\n';
                    break;

                case 't':
                    t[j++] = '\t';
                    break;

                default:
                    t[j++] = '\\';
                    t[j++] = s[i];
                    break;
            }
        } else {
            t[j++] = s[i];
        }
    }
    t[j] = '\0';
}