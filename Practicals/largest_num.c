#include <stdio.h>
int largest(int a, int b, int c) {
    if (a >= b && a >= c) {
        return a;
    } else if (b >= a && b >= c) {
        return b;
    } else {
        return c;
    }
}

int main() {
    int x, y, z;
    printf("Enter three integers separate Them by space: ");
        scanf("%d %d %d", &x, &y, &z);
    int max = largest(x, y, z);
    printf("Largest of %d, %d, %d is %d\n", x, y, z, max);
    return 0;
}