#include <stdio.h>
#include <math.h>

int fib(int n, int a, int b);

int main(){
    int n;
    printf("enter total number of terms you want the fibonacci series of:- ");
    scanf("%d", &n);
    
    printf("the series is as follows:- \n");
    printf("%d %d %d ", 0, 1, 1);
    fib(n-2,1,1);
    return 0;
}

int fib(int n, int a, int b){
    int c = a + b;
    if(n == 1){
        return 0;
    }
    else{
        printf("%d ", c);
        fib(n-1,b,c);
        return 0;
    }
}