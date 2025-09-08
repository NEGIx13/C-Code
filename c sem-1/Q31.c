#include <stdio.h>
#include <math.h>

int table(int n);

int main(){
    int n;
    printf("enter the number for while you want the table of:- ");
    scanf("%d", &n);
    
    for(int i=0;i<10;i++){
        table(n);
    }
    return 0;
}

int table(int n){
    static int a;
    // a = n;
    printf("%d \n", a);
    a += n;
    return 0;
}
