#include <stdio.h>
#include <math.h>



int main(){
    int n;
    printf("enter the number to be squared:- ");
    scanf("%d", &n);
    
    printf("the square of the number is:- %.1f ", pow(n, 2));
    
    return 0;
}