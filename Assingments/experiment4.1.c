#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x, y;

    printf("Enter two numbers:\n");
    scanf("%d %d", &x, &y);

    printf("\nBefore swapping:");
    printf("\nx = %d, y = %d", x, y);

    swap(&x, &y);

    printf("\n\nAfter swapping:");
    printf("\nx = %d, y = %d", x, y);

    return 0;
}