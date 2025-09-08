#include <stdio.h>
#include <math.h>

int main(){
    int n;
    printf("enter the number for which you want the table to be made:- ");
    scanf("%d", &n);
    
    for(int i=10;i>0;i--){
        printf("%d into %d is = %d \n", n, i, i*n);
    }
}