#include <stdio.h>
int main() {
    int units;
    if (scanf("%d", &units) != 1) return 1;
    float rate;
    if (units <= 100) rate = 3.0f;
    else if (units <= 200) rate = 4.0f;
    else rate = 5.0f;
    float bill = units * rate;
    printf("Units=%d\nRate=%.2f\nTotal bill=%.2f\n", units, rate, bill);
    return 0;
}