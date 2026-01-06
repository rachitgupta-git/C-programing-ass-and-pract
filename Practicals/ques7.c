#include <stdio.h>
int main() {
    float b1, b2;
    if (scanf("%f %f", &b1, &b2) != 2) return 1;
    printf("Both equal? %d\n", (b1 == b2));
    printf("First greater? %d\n", (b1 > b2));
    printf("Second greater? %d\n", (b2 > b1));
    return 0;
}