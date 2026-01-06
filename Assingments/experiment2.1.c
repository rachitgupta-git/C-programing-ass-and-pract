#include <stdio.h>
int main()
{
    char name[50];
    float basicSalary, hra, da, grossSalary, incomeTax, netSalary;
    printf("Enter employee name: ");
    scanf("%s", name);
    printf("Enter basic salary: ");
    scanf("%f", &basicSalary);
    hra = 0.20 * basicSalary;
    da = 0.10 * basicSalary;
    grossSalary = basicSalary + hra + da;
    incomeTax = 0.05 * grossSalary;
    netSalary = grossSalary - incomeTax;
    printf("Salary Details \n");
    printf("Employee Name     : %s\n", name);
    printf("Basic Salary      : %.2f\n", basicSalary);
    printf("House Rent Allow. : %.2f\n", hra);
    printf("Dearness Allow.   : %.2f\n", da);
    printf("Gross Salary      : %.2f\n", grossSalary);
    printf("Income Tax        : %.2f\n", incomeTax);
    printf("Net Salary        : %.2f\n", netSalary);

    return 0;
}