#include <stdio.h>
#include <math.h>

int factorial(int n);

int main(){
    int n;
    printf("enter the number to find the factorial of:- ");
    scanf("%d", &n);
    printf("the factorial of the given integer is:- %d \n", factorial(n));
    return 0;
}


int factorial(int n){
    if(n == 1){
        return 1;
    }
    int factnm1 = factorial(n-1);
    int factT = factnm1 * n;
    return factT;
}