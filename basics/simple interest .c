#include <stdio.h>

int main(){
    float prin,roi,years,si,amt;
    printf("enter the principal amt:- ");
    scanf("%f",&prin);
    printf("enter the rate of interest (in percent):- ");
    scanf("%f",&roi);
    printf("enter the time taken (years) :- ");
    scanf("%f",&years);
    
    si = prin*roi*years/100;
    amt = prin + si;
    
    printf("the will be receive %d interest on the amount making his total earnings to %d", si,amt);
    return 0;
}