#include <stdio.h>
int main() {
    int marks;
    if (scanf("%d", &marks) != 1) return 1;
    if (marks >= 90)
        printf("Grade A\n");
    else if (marks >= 75)
        printf("Grade B\n");
    else if (marks >= 50)
        printf("Grade C\n");
    else
        printf("Grade F\n");
    return 0;
}