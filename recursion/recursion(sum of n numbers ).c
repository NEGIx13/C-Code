#include <stdio.h>
#include <math.h>


int sum(int n);

int main(){
    int n;
    printf("enter the number of natural numbers you want to add:- ");
    scanf("%d", &n);
    printf("Total sum is:- %d \n", sum(n));
    return 0;
}


int sum(int n){
    if(n == 1){
        return 1;
    }
    int sumnm1 = sum(n-1);
    int sumT = sumnm1 + n;
    return sumT;
}