#include <stdio.h>
int main() {
    float bal;
    printf("Enter initial balance: ");
    if (scanf("%f", &bal) != 1) return 1;
    printf("Initial balance: %.2f\n", bal);
    float interest;
    printf("Enter interest amount to add: ");
    if (scanf("%f", &interest) != 1) return 1;
    bal += interest;
    printf("After adding interest: %.2f\n", bal);
    float charge;
    printf("Enter maintenance charge to deduct: ");
    if (scanf("%f", &charge) != 1) return 1;
    bal -= charge;
    printf("After deducting maintenance charge: %.2f\n", bal);
    float bonus;
    printf("Enter bonus factor (e.g., 1.05): ");
    if (scanf("%f", &bonus) != 1) return 1;
    bal *= bonus;
    printf("After applying bonus factor: %.2f\n", bal);
    bal /= 2.0f;
    printf("After dividing between two linked accounts: %.2f\n", bal);
    return 0;
}