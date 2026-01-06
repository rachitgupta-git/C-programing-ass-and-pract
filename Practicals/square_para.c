#include <stdio.h>
int square(int n) {
    return n * n;
}

int main() {
    int num;
    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    int result = square(num);
    printf("Square of %d is %d\n", num, result);
    return 0;
}