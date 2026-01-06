#include <stdio.h>
int main() {
    int i = 42;
    float f = 3.14f;
    char c = 'A';
    double d = 2.71828;
    printf("int=%d size=%zu\n", i, sizeof i);
    printf("float=%f size=%zu\n", f, sizeof f);
    printf("char=%c size=%zu\n", c, sizeof c);
    printf("double=%f size=%zu\n", d, sizeof d);
    return 0;
}