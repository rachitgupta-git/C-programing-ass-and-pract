#include <stdio.h>
void calculate(float *a, float *b, float *add, float *sub, float *mul, float *div)
{
    *add = *a + *b;
    *sub = *a - *b;
    *mul = (*a) * (*b);

    if (*b != 0)
        *div = (*a) / (*b);
}
void calculate(float *a, float *b, float *sum, float *diff, float *prod, float *quot);

int main()
{
    float num1, num2;
    float add, sub, mul, div;

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    calculate(&num1, &num2, &add, &sub, &mul, &div);

    printf("\nAddition: %.2f", add);
    printf("\nSubtraction: %.2f", sub);
    printf("\nMultiplication: %.2f", mul);

    if (num2 != 0)
        printf("\nDivision: %.2f", div);
    else
        printf("\nDivision: Not possible (division by zero)");

    return 0;
}