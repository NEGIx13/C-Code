#include <stdio.h>
#include <math.h>

int swap(int a,int b);
int _swap(int *a,int *b);


int main(){
    int a,b;
    printf("enter 2 intergers to be swapped:- ");
    scanf("%d %d", &a, &b);
    printf(" are the swaped nos  ", swap(a,b));
    
    printf(" are the swaped nos  ", _swap(&a,&b));
    return 0;
}


int swap(int a, int b){
    int c = a;
    a = b;
    b = c;
    printf("a = %d and b = %d", a,b);
    return 0;
}


int _swap(int *a, int *b){
    int c = *a;
    *a = *b;
    *b = c;
    printf("a = %d and b = %d", *a,*b);
}