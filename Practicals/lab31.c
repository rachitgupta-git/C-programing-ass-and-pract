#include <stdio.h>
int max(int *x, int *y)
{
    if (*x > *y)
    {
        return *x;
    }
    else
    {
        return *y;
    }
}
int main()
{
    int a, b;
    printf("enter two number");
    scanf("%d %d", &a, &b);
    int res = max(&a, &b);
    printf("%d", res);
    return 0;
}