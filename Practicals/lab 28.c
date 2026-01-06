#include <stdio.h>
int main() {
    char letter;
    int row, col;
    
    for (letter = 'A'; letter <= 'Z'; letter++) {
        for (row = 0; row < 7; row++) {
            for (col = 0; col < 5; col++) {
                int print_star = 0;
                if (letter == 'A') {
                    if ((row == 0 && col == 2) || (row == 1 && (col == 1 || col == 3)) || 
                        (row == 2 && col == 0) || (row == 2 && col == 4) || 
                        (row == 3 && col == 0) || (row == 3 && col == 4) || 
                        (row == 4 && (col >= 0 && col <= 4)) || 
                        (row == 5 && (col == 0 || col == 4)) || 
                        (row == 6 && (col == 0 || col == 4))) {
                        print_star = 1;
                    }
                }
                else if (letter == 'B') {
                    if ((col == 0 && row >= 0 && row <= 6) || 
                        (row == 0 && col >= 0 && col <= 3) || 
                        (row == 3 && col >= 0 && col <= 3) || 
                        (row == 6 && col >= 0 && col <= 3) || 
                        ((row == 1 || row == 2) && col == 4) || 
                        ((row == 4 || row == 5) && col == 4)) {
                        print_star = 1;
                    }
                }
                else if (letter == 'C') {
                    if ((row == 0 && col >= 1 && col <= 4) || 
                        (row == 6 && col >= 1 && col <= 4) || 
                        (col == 0 && row >= 0 && row <= 6)) {
                        print_star = 1;
                    }
                }
                else if (letter == 'D') {
                    if ((col == 0 && row >= 0 && row <= 6) || 
                        (row == 0 && col >= 0 && col <= 3) || 
                        (row == 6 && col >= 0 && col <= 3) || 
                        (col == 4 && row >= 1 && row <= 5)) {
                        print_star = 1;
                    }
                }
                else if (letter == 'E') {
                    if ((col == 0 && row >= 0 && row <= 6) || 
                        (row == 0 && col >= 0 && col <= 4) || 
                        (row == 3 && col >= 0 && col <= 3) || 
                        (row == 6 && col >= 0 && col <= 4)) {
                        print_star = 1;
                    }
                }
                else if (letter == 'F') {
                    if ((col == 0 && row >= 0 && row <= 6) || 
                        (row == 0 && col >= 0 && col <= 4) || 
                        (row == 3 && col >= 0 && col <= 3)) {
                        print_star = 1;
                    }
                }
                else if (letter == 'G') {
                    if ((row == 0 && col >= 1 && col <= 4) || 
                        (col == 0 && row >= 0 && row <= 6) || 
                        (row == 6 && col >= 0 && col <= 4) || 
                        (row >= 3 && row <= 5 && col == 4)) {
                        print_star = 1;
                    }
                }
                else if (letter == 'H') {
                    if ((col == 0 && row >= 0 && row <= 6) || 
                        (col == 4 && row >= 0 && row <= 6) || 
                        (row == 3 && col >= 0 && col <= 4)) {
                        print_star = 1;
                    }
                }
                else if (letter == 'I') {
                    if ((row == 0 && col >= 1 && col <= 3) || 
                        (col == 2 && row >= 0 && row <= 6) || 
                        (row == 6 && col >= 1 && col <= 3)) {
                        print_star = 1;
                    }
                }
                else if (letter == 'J') {
                    if ((row == 0 && col >= 1 && col <= 4) || 
                        (col == 4 && row >= 0 && row <= 5) || 
                        (row == 6 && col >= 0 && col <= 4) || 
                        (col == 0 && row == 6)) {
                        print_star = 1;
                    }
                }
                else if (letter == 'K') {
                    if ((col == 0 && row >= 0 && row <= 6) || 
                        (row == 3 && col >= 0 && col <= 3) || 
                        ((row == 1 || row == 2) && col == 4) || 
                        ((row == 4 || row == 5) && col == 4)) {
                        print_star = 1;
                    }
                }
                else if (letter == 'L') {
                    if ((col == 0 && row >= 0 && row <= 6) || 
                        (row == 6 && col >= 0 && col <= 4)) {
                        print_star = 1;
                    }
                }
                else if (letter == 'M') {
                    if ((col == 0 && row >= 0 && row <= 6) || 
                        (col == 4 && row >= 0 && row <= 6) || 
                        (row == 1 && col == 2) || 
                        (row == 2 && (col == 1 || col == 3))) {
                        print_star = 1;
                    }
                }
                else if (letter == 'N') {
                    if ((col == 0 && row >= 0 && row <= 6) || 
                        (col == 4 && row >= 0 && row <= 6) || 
                        ((row == 1 || row == 2) && col == 3) || 
                        ((row == 3 || row == 4) && col == 2) || 
                        (row == 5 && col == 1)) {
                        print_star = 1;
                    }
                }
                else if (letter == 'O') {
                    if (((row == 0 || row == 6) && col >= 1 && col <= 3) || 
                        ((col == 0 || col == 4) && row >= 1 && row <= 5)) {
                        print_star = 1;
                    }
                }
                else if (letter == 'P') {
                    if ((col == 0 && row >= 0 && row <= 6) || 
                        (row == 0 && col >= 0 && col <= 3) || 
                        (row == 3 && col >= 0 && col <= 3) || 
                        ((row == 1 || row == 2) && col == 4)) {
                        print_star = 1;
                    }
                }
                else if (letter == 'Q') {
                    if (((row == 0 || row == 6) && col >= 1 && col <= 3) || 
                        ((col == 0 || col == 4) && row >= 1 && row <= 5) || 
                        (row == 5 && col == 3) || (row == 6 && col == 4)) {
                        print_star = 1;
                    }
                }
                else if (letter == 'R') {
                    if ((col == 0 && row >= 0 && row <= 6) || 
                        (row == 0 && col >= 0 && col <= 3) || 
                        (row == 3 && col >= 0 && col <= 3) || 
                        ((row == 1 || row == 2) && col == 4) || 
                        ((row == 4 || row == 5 || row == 6) && col == 4)) {
                        print_star = 1;
                    }
                }
                else if (letter == 'S') {
                    if ((row == 0 && col >= 1 && col <= 4) || 
                        (row == 3 && col >= 0 && col <= 4) || 
                        (row == 6 && col >= 0 && col <= 3) || 
                        (row == 1 && col == 0) || (row == 2 && col == 0) || 
                        (row == 4 && col == 4) || (row == 5 && col == 4)) {
                        print_star = 1;
                    }
                }
                else if (letter == 'T') {
                    if ((row == 0 && col >= 0 && col <= 4) || 
                        (col == 2 && row >= 1 && row <= 6)) {
                        print_star = 1;
                    }
                }
                else if (letter == 'U') {
                    if ((col == 0 && row >= 0 && row <= 5) || 
                        (col == 4 && row >= 0 && row <= 5) || 
                        (row == 6 && col >= 1 && col <= 3)) {
                        print_star = 1;
                    }
                }
                else if (letter == 'V') {
                    if ((col == 0 && row >= 0 && row <= 4) || 
                        (col == 4 && row >= 0 && row <= 4) || 
                        (row == 5 && col == 1) || (row == 5 && col == 3) || 
                        (row == 6 && col == 2)) {
                        print_star = 1;
                    }
                }
                else if (letter == 'W') {
                    if ((col == 0 && row >= 0 && row <= 6) || 
                        (col == 4 && row >= 0 && row <= 6) || 
                        (row == 5 && col == 2)) {
                        print_star = 1;
                    }
                }
                else if (letter == 'X') {
                    if ((row == 3 && col >= 0 && col <= 4) || 
                        ((row == 0 || row == 6) && (col == 0 || col == 4)) || 
                        ((row == 1 || row == 5) && (col == 1 || col == 3)) || 
                        ((row == 2 || row == 4) && col == 2)) {
                        print_star = 1;
                    }
                }
                else if (letter == 'Y') {
                    if ((col == 0 && row >= 0 && row <= 2) || 
                        (col == 4 && row >= 0 && row <= 2) || 
                        (col == 2 && row >= 3 && row <= 6) || 
                        (row == 3 && (col == 1 || col == 3))) {
                        print_star = 1;
                    }
                }
                else if (letter == 'Z') {
                    if ((row == 0 && col >= 0 && col <= 4) || 
                        (row == 6 && col >= 0 && col <= 4) || 
                        (row == 3 && col == 2) || 
                        ((row == 1 || row == 2) && col == 3) || 
                        ((row == 4 || row == 5) && col == 1)) {
                        print_star = 1;
                    }
                }
                
                printf(print_star ? "*" : " ");
            }
            printf("  \n");
        }
    }
    
    return 0;
}