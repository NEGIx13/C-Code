#include <stdio.h>
#include <math.h>

int maxi(int a, int b, int *max1);

int main(){
    int a,b, *max1;
    printf("enter the 2 values to be compaired:- ");
    scanf("%d %d", &a, &b);
    
    maxi(a, b, &max1);
    
    printf("the maximum value among the 2 values is:- %d", max1);
    return 0;
}


int maxi(int a,int b, int *max1){
    if(a>b){
        *max1 = a;
    }
    else{
        *max1 = b;
    }
    return 0;
}