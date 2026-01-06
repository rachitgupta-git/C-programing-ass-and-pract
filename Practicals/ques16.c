#include <stdio.h>
int main() {
    int color;
    if (scanf("%d", &color) != 1) return 1;
    switch (color) {
        case 1: printf("Red -> Stop\n");
         break;
        case 2: printf("Yellow -> Ready\n");
         break;
        case 3: printf("Green -> Go\n");
         break;
        default: printf("Invalid color\n");
         break;
    }
    return 0;
}   