#include <stdio.h>
int main() {
    int a = 7;
    int i = 7;
    for (int row = 0; row < a; ++row) {
        for (int col = 0; col < i; ++col) {
            if (col == 0 ||
               ((row == 0 || row == 3) && col <= 4) ||
               ((row == 1 || row == 2) && col == 5) ||
               (row >= 4 && col == row)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf(" "); printf(" ");
        for (int col = 0; col < i; ++col) {
            if (((col == 0 || col == 6) && row > 0) ||
                (row == 0 && col >= 2 && col <= 4) ||
                (row == 3 && col >= 1 && col <= 5)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf(" "); printf(" ");
        for (int col = 0; col < i; ++col) {
            if ((row == 0 || row == 6) && col >= 1 && col <= 5) {
                printf("*");
            } else if (col == 1 && row > 0 && row < 6) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf(" "); printf(" ");
        for (int col = 0; col < i; ++col) {
            if (col == 0 || col == 6 || row == 3) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf(" "); printf(" ");
        for (int col = 0; col < i; ++col) {
            if (row == 0 || row == 6 || col == 3) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf(" "); printf(" ");
        for (int col = 0; col < i; ++col) {
            if (row == 0 || col == 3) {
                printf("*");
            } else {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}