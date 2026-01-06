#include <stdio.h>
int main() {
    int attendance[30];
    int count = 0;
    for (int i = 0; i < 30; i++) {
        printf("Enter Attendance for Day %d (1=Present, 0=Absent): ", i + 1);
        scanf("%d", &attendance[i]);
        if (attendance[i] == 1) {
            count++;
        }
    }
    printf("\nTotal Present Days = %d\n", count);
    printf("Total Absent Days = %d\n", 30 - count);
    return 0;
}