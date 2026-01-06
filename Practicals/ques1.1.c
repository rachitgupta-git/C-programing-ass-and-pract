#include<stdio.h>
int x = 7;
int f = 1;
int a;
void fact(){
    for(a = 1; a <= x; a++){
        printf("%d * ", a);
        f *= a;
    }
}
int main(){
    fact();
    printf("= %d\n", f);
    
    return 0;
}