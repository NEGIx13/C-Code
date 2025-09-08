#include <stdio.h>
#include <math.h>

int fact(int n);

int main(){
    int n,p;
    printf("enter a number you want the factorial of:- ");
    scanf("%d", &n);
    p = fact(n);
    printf("the factorial of %d is = %d", n, p);
    return 0;
}

int fact(int n){
    int prod = 1;
    if(n == 1){
        return 1;
    }
    else {
        prod = n * fact(n-1);
        return prod; 
    }
}
