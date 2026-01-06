#include <stdio.h>
int main()
{
    // A
    for (int a = 1; a <= 5; a++)
    {
        for (int b = 4; b >= a; b--)
        {
            printf(" ");
        }
        for (int c = 1; c <= (a * 2 - 1); c++)
        {
            if (c == 1 || c == (a * 2 - 1) || a == 3)
                printf("*");
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n");

    // R
    for (int a = 1; a <= 7; a++)
    {
        for (int b = 1; b <= 6; b++)
        {
            if (b == 1 ||
                (a == 1 && b <= 5) ||
                (a == 4 && b <= 5) ||
                (b == 6 && a > 1 && a < 4) ||
                (a > 4 && b == a - 3 + 2))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    printf("\n");

    // Y
    for (int a = 1; a <= 7; a++)
    {
        for (int b = 1; b <= 7; b++)
        {
            if ((b == a && a <= 4) || (b == 8 - a && a <= 4) || (b == 4 && a > 4))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    printf("\n");

    // A
    for (int a = 1; a <= 5; a++)
    {
        for (int b = 4; b >= a; b--)
        {
            printf(" ");
        }
        for (int c = 1; c <= (a * 2 - 1); c++)
        {
            if (c == 1 || c == (a * 2 - 1) || a == 3)
                printf("*");
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n");

    // N
    for (int a = 1; a <= 7; a++)
    {
        for (int b = 1; b <= 7; b++)
        {
            if (b == 1 ||
                b == 7 ||
                b == a)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    printf("\n");
    return 0;
}