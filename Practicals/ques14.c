#include <stdio.h>
#include <ctype.h>
int main() {
    char ch;
    if (scanf(" %c", &ch) != 1) return 1;
    if (isalpha((unsigned char)ch))
        printf("%c is an alphabet.\n", ch);
    else if (isdigit((unsigned char)ch))
        printf("%c is a digit.\n", ch);
    else
        printf("%c is a special character.\n", ch);
    return 0;
}