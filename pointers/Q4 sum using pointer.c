#include <stdio.h>
#include <math.h>

int add(int *ptr1, int *ptr2);

int main(){
    int a,b,sum;
    printf("input the first number:- ");
    scanf("%d", &a);
    printf("input the second number:- ");
    scanf("%d", &b);
    
    sum = add(&a,&b);
    printf("the sum of the entered numbers is:- %d", sum);
    return 0;
}

int add(int *ptr1, int *ptr2){
    int sum;
    sum = *ptr1 + *ptr2;
    return sum;
}