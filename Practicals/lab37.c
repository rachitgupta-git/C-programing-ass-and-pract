#include <stdio.h>
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int element, found = 0;
    printf("enter the element that search:");
    scanf("%d", &element);
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == element)
        {
            printf("element found at %d location", i);
            found = 1;
            break;
        }
    }
    if (found == 0)
    {
        printf("element is not found");
    }
    return 0;
}