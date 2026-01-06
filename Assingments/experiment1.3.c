#include <stdio.h>

int main()
{
    int x = 5;
    int result1, result2;

    result1 = ++x;
    printf("After pre-increment (++x): x = %d, result = %d\n", x, result1);

    x = 5;
    result2 = x++;
    printf("After post-increment (x++): x = %d, result = %d\n", x, result2);

    return 0;
}