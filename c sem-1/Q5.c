#include <stdio.h>
#include <math.h>

int main(){
    float c,f;
    printf("enter the value in celcius:- ");
    scanf("%f", &c);
    f = (c*9)/5 + 32;
    printf("temperature converted into farenheit:- %5.2f \n", f);
    
    printf("enter the value in farenheit:- ");
    scanf("%f", &f);
    c = (f - 32)*5/9;
    printf("temperature converted into celcius:- %5.2f", c);
    
    return 0;
} 
