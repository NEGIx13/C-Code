#include <stdio.h>
#include <math.h>

int main(){
    int *ab, m;
    printf("enter the value of m :- ");
    scanf("%d", &m);
    
    printf("address of m : %p \n", &m);
    printf("value of m : %d \n \n", m);
    
    ab = &m;
    printf("address of pointer ab : %p \n", ab);
    printf("content of pointer ab : %d \n \n", *ab);
    
    printf("enter a new value to m :- ");
    scanf("%d", &m);
    printf("address of pointer ab : %p \n", ab);
    printf("content of pointer ab : %d \n \n", *ab);
    
    printf("assign a new value to the pointer:- ");
    scanf("%d", ab);
    printf("address of m : %p \n", &m);
    printf("value of m : %d", m);
    
    return 0;
}
