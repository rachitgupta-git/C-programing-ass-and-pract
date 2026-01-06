#include <stdio.h>
int main()
{
    float balance, interest, maintenance_charge, bonus_factor;
    printf("Enter initial account balance: ");
    scanf("%f", &balance);

    printf("Enter interest amount to add: ");
    scanf("%f", &interest);
    balance += interest;
    printf("Balance after adding interest: %.2f\n", balance);

    printf("Enter annual maintenance charge: ");
    scanf("%f", &maintenance_charge);
    balance -= maintenance_charge;
    printf("Balance after deducting maintenance charge: %.2f\n", balance);

    printf("Enter bonus factor: ");
    scanf("%f", &bonus_factor);
    balance *= bonus_factor;
    printf("Balance after applying bonus factor: %.2f\n", balance);

    balance /= 2;
    printf("Balance in each linked account:%2f\n", balance);
    return 0;
}