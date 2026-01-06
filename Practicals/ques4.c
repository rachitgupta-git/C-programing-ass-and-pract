#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two integers: ");
    if (scanf("%d %d", &a, &b) != 2) return 1;
    printf("a+b=%d\n", a + b);
    printf("a-b=%d\n", a - b);
    printf("a*b=%d\n", a * b);
    if (b != 0) {
        printf("a/b (int)=%d\n", a / b);
        printf("a/b (float)=%.2f\n", (float)a / b);
        printf("a%%b=%d\n", a % b);
    } else {
        printf("a/b=undefined (division by zero)\n");
        printf("a%%b=undefined (modulus by zero)\n");
    }
    return 0;
}