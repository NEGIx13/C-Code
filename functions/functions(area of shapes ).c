#include <stdio.h>
#include <math.h>

void Asquare(int s);
void Arectangle(int l, int b);
void Acircle(int r);


int main(){
    int s,l,b,r;
    printf("enter the side of the square:- ");
    scanf("%d", &s);
    
    printf("enter the length of the rectangle:- ");
    scanf("%d", &l);
    
    printf("enter the breadth of the rectangle:- ");
    scanf("%d", &b);
    
    printf("enter the radius of the circle :- ");
    scanf("%d", &r);
    
    Asquare(s);
    Arectangle(l,b);
    Acircle(r);
    
//    printf("the square of the number is:- %.1f ", pow(n, 2));
    
    return 0;
}


void Asquare(int s){
    printf("the area of the square is :- %.1f \n", pow(s, 2));
}


void Arectangle(int l, int b){
    printf("the area of the rectangle is :- %d \n", l*b);
}


void Acircle(int r){
    printf("area of the circle is:- %.2f \n", 3.14*pow(r, 2));
}