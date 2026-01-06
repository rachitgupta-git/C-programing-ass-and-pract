#include <stdio.h>
int fact()
{
    int num, fact = 1;
    printf("enter a number:");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    return fact;
}
int main()
{
    int res = fact();
    printf("%d", res);
}