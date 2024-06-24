#include <stdio.h>
#include <math.h>

int main(){
    int a,b,c,d;
    printf("------ENTER THE QUADRATIC NUMBER------");
    printf("enter the cofficient of x.sq :-(let it not be 0) ");
    scanf("%d", %a);
    printf("enter the cofficient of x :- ");
    scanf("%d", &b);
    printf("enter the constant of the equation:- ");
    scanf("%d", &c);
    
    d = (b*b) - (4*a*c);
    if(d==0){
        printf("the equation has real and equal roots. ");
    }
    else if(d>0){
        printf("the equation has real and unequal roots. ")
    }
    else{
        printf("the equation has unreal roots. ")
    }
    return 0;
}
