#include <stdio.h>
int main() {
    char *days[] = {"Monday:", "Tuesday:", "Wednesday:", "Thursday:", "Friday:", "Saturday:"};
    for (int day = 0; day < 6; day++) {
        printf("\n%s\n", days[day]);
        for (int lect = 1; lect <= 5; lect++) {
            printf("Lecture %d\n", lect);
        }
    }
    return 0;
}