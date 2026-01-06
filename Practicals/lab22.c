#include <stdio.h>

int main()
{
    int i, x, total = 0;

    for (i = 1; i <= 30; i++)
    {
        printf("Day %d (1=Present, 0=Absent): ", i);
        scanf("%d", &x);
        total += x;
    }

    printf("\nTotal present days = %d\n", total);
    return 0;
}