#include <stdio.h>
int main() {
    int init;
    printf("Enter an integer: ");
    if (scanf("%d", &init) != 1) return 1;
    int x = init;
    int y = init;
    int pre = ++x + 10;
    int post = y++ + 10;
    printf("initial = %d\n", init);
    printf("pre-increment: ++x + 10 -> result = %d, x after = %d\n", pre, x);
    printf("post-increment: y++ + 10 -> result = %d, y after = %d\n", post, y);
    return 0;
}