#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#include <limits.h>
#include <stdbool.h>


int main(){
    int a, b;
    printf("enter the value of a :- ");
    scanf("%d", &a);
    printf("enter the value of b :- ");
    scanf("%d", &b);\
    
    int power = pow(a,b);
    int expo = exp(a);
    float uroundof = ceil(9.1);
    float lroundof = floor(9.1);
    int square = sqrt(b);
    int logarithm = log10(10);
    
    printf("power :- %d \n exponencial :- %d \n", power, expo);
    printf("upper round :- %f \n lower round :- %f \n", uroundof, lroundof);
    printf("square toot :- %d \n log :- %d \n",square, logarithm);
    return 0;
}