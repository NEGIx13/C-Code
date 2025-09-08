#include <stdio.h>
#include <math.h>

int feb(int n);

int main(){
    int n;
    printf("enter the number of terms in the febonacci series:- ");
    scanf("%d", &n);
    
    printf("the %dth term in the febonacci series is:- %d", n, feb(n));
    return 0;
}


int feb(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
//    int febm1 = feb(n-1);
//    int febm2 = feb(n-2);
    int febt = feb(n-1) + feb(n-2);
    return febt;
}