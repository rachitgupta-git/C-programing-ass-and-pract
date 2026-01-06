#include <stdio.h>
int main() {
    int n;
    while (1) {
        printf("\nEnter your choise : \n");
        printf("Enter 0 to exit: ");
        scanf("%d", &n);
        if (n == 0) {
            printf("Exit.\n");
            break;
        }
        int i = 1;
        printf("\nMultiplication table of %d:\n", n);
    while (i<=10) {
         printf("%d X %d = %d\n", n, i, n * i);
        i++;
    }
 }
    return 0;
}
