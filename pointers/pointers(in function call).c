#include <stdio.h>
#include <math.h>

int square(int a);
int _square(int* a);

int main(){
    int n;
    printf("enter a number to be squared:- ");
    scanf("%d", &n);
    
    square(n);
    printf("the value of n is:- %d \n", n);
    
    _square(&n);
    printf("the value of n is:- %d \n", n);
    return 0;
}


int square(int a){
    printf("the value of n is:- %d \n", a * a );
    return 0;
}


int _square(int* a){
    *a = (*a) * (*a);
    printf("value of n is :- %d \n", *a );
}