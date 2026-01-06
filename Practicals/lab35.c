#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    int arr[10];
    printf("enter a number of element");
    scanf("%d", &n);
    printf("enter %d element\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("%d", sum);
    return 0;
}