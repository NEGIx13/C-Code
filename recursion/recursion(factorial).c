#include <stdio.h>
#include <math.h>

int fact(int n);

int main(){
    int n;
    printf("enter a number you want the factorial of:- ");
    scanf("%d", &n);
    int factorial = fact(n);
    printf(" FACTORIAL :- %d", factorial);
    return 0;
}

int fact(int n){
    if(n==1){
        return 1;
    }
    else{
        int total = n * fact(n-1);
        return total;
    }
}
