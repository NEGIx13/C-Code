#include <stdio.h>
#include <math.h>

int swap(int a, int b);

int main(){
    int a,b;
    printf("enter first number to be swapped:- ");
    scanf("%d", &a);
    printf("enter second number to be swapped:- ");
    scanf("%d", &b);
    
    printf("a is = %d \n", a);
    printf("b is = %d \n", b);
    swap(a,b);
    return 0;
}

int swap(int a, int b){
    int c = b;
    if(a == b){
        a = c;
        printf("a is = %d", b);
        return 0;
    }
    else{
        b = a;
        printf("b is = %d \n", b);
        swap(a,b);
        return 0;
    }
}