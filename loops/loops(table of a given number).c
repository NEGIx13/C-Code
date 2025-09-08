#include <stdio.h>
#include <math.h>

int main(){
    int n;
    printf("enter the number for which you need the table for:- ");
    scanf("%d", &n);
    int prod = n;
    
    for(int i=1;i<=10;i++){
        prod = i*n;
        printf("%d", n);
        printf(" into %d", i) ;
        printf(" is:- %d \n", prod);
    }
}