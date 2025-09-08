#include <stdio.h>
#include <math.h>

int main(){
    int x, n, i, prod;
    printf("enter the base number:- ");
    scanf("%d", &x);
    printf("enter the power of the number:- ");
    scanf("%d", &n);
    i = 1;
    prod = x;
    while(i < n){
        prod*= x;
        i++;
//        printf("%d", prod);
    }
    printf("the product of the following numbers is:- %d", prod);
    return 0;
}
