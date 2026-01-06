#include <stdio.h>
int main() {
    float total;
    int units[7];
    for (int i=0;i<7;i++) {
        printf("Enter units used on day %d: ",i+1);
        scanf("%d",&units[i]);
        total+=units[i];
    }
    printf("\nTotal electricity units used in a week = %.0f", total);
    return 0;
}