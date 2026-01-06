#include <stdio.h>

int main()
{
    int a = 10;
    float b = 5.5;
    char c = 'A';
    double d = 20.1234;

    printf("Integer value = %d, Size = %lu bytes\n", a, sizeof(a));
    printf("Float value = %.2f, Size = %lu bytes\n", b, sizeof(b));
    printf("Character value = %c, Size = %lu bytes\n", c, sizeof(c));
    printf("Double value = %.4lf, Size = %lu bytes\n", d, sizeof(d));

    return 0;
}