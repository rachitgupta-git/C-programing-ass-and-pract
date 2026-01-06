#include <stdio.h>
int main() {
    float total;
    float price[5];
    for (int i=0;i<5;i++) {
        printf("Enter price of item %d:",i + 1);
        scanf("%f",&price[i]);
        total += price[i];
    }
    printf("\nTotal Bill = %.2f", total);
    return 0;
}