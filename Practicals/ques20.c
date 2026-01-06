#include <stdio.h>
int main() {
    int age, count = 0;
    printf("Enter ages of 10 employees:\n");
    for (int i = 1; i <= 10; i++) {
        printf("Enter age of employee %d: ", i);
        scanf("%d", &age);
        if (age >= 30) {
            count++;
        }
    }
    printf("\nNumber of employees 30 years or older: %d\n", count);
    return 0;
}