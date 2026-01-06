#include<stdio.h>
    int fact(int x){
        int f=1,a;
        for (a=1; a<=x; a++){
            printf("%d *",a);
            f*=a;
    }
        return f;
    }

int main(){
    int result = fact(7);
    printf("= %d", result);
    
    return 0;

} 
