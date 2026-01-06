#include <stdio.h>
int main() {
    int a, b, c;
    if (scanf("%d %d %d", &a, &b, &c) != 3) return 1;
    if (a >= b) {
        if (a >= c)
            printf("%d is the largest number\n", a);
        else
            printf("%d is the largest number\n", c);
    } else {
        if (b >= c)
            printf("%d is the largest number\n", b);
        else
            printf("%d is the largest number\n", c);
    }
    return 0;
}