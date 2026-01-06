#include <stdio.h>
#include <string.h>
int main() {
    char name[100];
    float basic;
    printf("Enter employee name: ");
    if (!fgets(name, sizeof name, stdin)) return 1;
    size_t len = strlen(name);
    if (len && name[len-1] == '\n') name[len-1] = '\0';
    printf("Enter basic salary: ");
    if (scanf("%f", &basic) != 1) return 1;
    float hra = basic * 0.20f;
    float da = basic * 0.10f;
    float gross = basic + hra + da;
    float tax = gross * 0.05f;
    float net = gross - tax;
    printf("\nEmployee Name: %s\n", name);
    printf("Basic Salary: %.2f\n", basic);
    printf("HRA: %.2f\n", hra);
    printf("DA: %.2f\n", da);
    printf("Gross Salary: %.2f\n", gross);
    printf("Income Tax: %.2f\n", tax);
    printf("Net Salary: %.2f\n", net);
    return 0;
}