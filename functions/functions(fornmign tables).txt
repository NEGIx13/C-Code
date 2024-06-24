#include <stdio.h>
#include <math.h>

void table(int n);

int main(){
    int n;
    printf("enter the number for which you the table needs to be formed:- ");
    scanf("%d", &n);
    
    table(n);
    return 0;
}


void table(int n){
    for(int i=1;i<=10;i++){
        printf("%d into %d is :- %d \n", n, i, i*n);
    }
}