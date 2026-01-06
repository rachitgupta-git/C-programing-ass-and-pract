#include <stdio.h>
int factorial()
{
    int num, fact = 1;
    printf("enter a no. to find factorial:");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {

        fact *= i;
    }
    return fact;
}
int main()
{
    int result = factorial();
    printf("%d", result);
}