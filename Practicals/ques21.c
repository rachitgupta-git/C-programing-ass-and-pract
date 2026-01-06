#include <stdio.h>
int main() {
    float total;
    float distance[30];
    for (int i=0;i<30;i++) {
        printf("Enter Distance Walked On Day %d (km): ",i+1);
        scanf("%f",&distance[i]);
        total+=distance[i];
    }
    printf("\nTotal Distance Walked = %.2f",total);
    return 0;
}