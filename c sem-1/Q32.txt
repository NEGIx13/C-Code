#include <stdio.h>
#include <math.h>

float value(float p, float r, int t);

int main(){
    int t;
    float p, r, total;
    
    printf("enter the prin.. amt :- ");
    scanf("%f", &p);
    printf("enter the rate of interest :- ");
    scanf("%f", &r);
    printf("enter the time taken:- ");
    scanf("%d", &t);
    total = value(p,r,t);
    printf("total value of the after interest is:- %7.2f", p + total);
    return 0;
}

float value(float p, float r, int t){
    float total = (p*r*t)/100;
    return total;
}
