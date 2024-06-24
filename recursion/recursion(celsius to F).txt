#include <stdio.h>
#include <math.h>

float ctf(float c);

int main(){
    float c;
    printf("enter the temperature in celsius to be converted:- ");
    scanf("%f", &c);
    
    printf("the given temperatire converted into fahrenheit is:- %f ", ctf(c));
    return 0;
}


float ctf(float c){
    float f = (c * 9/5) + 32;
    return f;
}