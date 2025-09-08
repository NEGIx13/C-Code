#include <stdio.h>
#include <math.h>
#define INTEREST 10

float si(float prin, int t);

int main(){
    float prin;
    int t;
    
    printf("enter the principal amount to find the simple interest off:- ");
    scanf("%f", &prin);
    printf("enter the total time taken (in years) :- ");
    scanf("%d", &t);
    printf("total amount is %8.2f after the simple interest of %8.2f", si(prin, t)+prin, si(prin, t));
    return 0;
}

float si(float prin, int t){
    float amt;
    amt = (INTEREST * prin * t)/100;
    return amt;
}
// 9873717545 - shailee