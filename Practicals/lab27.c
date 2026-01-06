#include <stdio.h>
int square()
{
    int num;
    printf("enter a no. to find square:");
    scanf("%d", &num);
    return num * num;
}
int main()
{
    int result = square();
    printf("square=%d", result);
    return 0;
}