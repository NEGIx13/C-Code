#include <stdio.h>
#include <math.h>
#define ROI 0.1

int main(){
    int prin, time1,si;
    printf("enter the principal amount:- ");
    scanf("%d", &prin);
    
    printf("enter the time taken(in years):- ");
    scanf("%d", &time1);
    
    si = ROI * prin * time1;
    printf("total simple interest earned:- %d \n and total amount is:- %d", si, si+prin);
    return 0;
}
