#include <stdio.h>
#include <math.h>

int add(int a,int b);

int main(){
    int n,m;
    printf("enter the 1st number:- ");
    scanf("%d", &n);
    printf("enter the 2nd number:- ");
    scanf("%d", &m);
    
    add(n,m);
    return 0;
}


int add(int a, int b){
    int sum = 0;
    sum = a + b;
    printf("the sum of the 2 numbers is:- %d", sum);
    return 0;
}