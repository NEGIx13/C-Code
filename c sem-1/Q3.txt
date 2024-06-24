#include <stdio.h>
#include <math.h>

int main(){
    int a, b;
    float sum, difference, product, average;
    printf("enter first number:- ");
    scanf("%d", &a);
    printf("enter second number:- ");
    scanf("%d", &b);
    
    sum = a+b;
    difference = a-b;
    product = a*b;
    average = (a+b)/2;
    
    printf("the sum of %d and %d is %f \n", a, b, sum);
    printf("the average of %d and %d is %f", a, b, average);
    return 0;
}