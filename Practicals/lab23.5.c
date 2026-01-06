#include <stdio.h>
int main()
{
    for (int a = 1; a < 6; a++)
    {
        for (int b = 5; b >= a; b--)
            printf(" ");
        {
            for (int c = 1; c <= a; c++)
            {
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}