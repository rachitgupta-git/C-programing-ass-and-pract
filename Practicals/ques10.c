#include <stdio.h>
int main() {
    int n;
    if (scanf("%d", &n) != 1) return 1;
    if (n % 2 == 0)
        printf("%d is an even number\n", n);
    else
        printf("%d is an odd number\n", n);
    return 0;
}