#include <stdio.h>
// #define pi 3.14

int main(){
    int l,b,s,r;
    float pi = 3.14;
    printf("enter the length of the rectangle:- ");
    scanf("%d", &l);
    printf("enter the breadth of the rectangle:- ");
    scanf("%d", &b);
    printf("enter the length of the side of the square:- ");
    scanf("%d", &s);
    printf("enter the radius of the circle:- ");
    scanf("%d", &r);
    
    printf("total area of the rectangle is:- %d \n", l*b);
    printf("total area of the square is :- %d \n", s*s);
    printf("total area of the circle:- %5.2f \n", pi*r*r);
    
    return;
}