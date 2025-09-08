#include <stdio.h>
#include <math.h>

int swap(int *a, int *b);

int main(){
    int p, q;
    printf("enter the first value to be swapped:- ");
    scanf("%d", &p);
    printf("enter the second value to be swapped:- ");
    scanf("%d", &q);
    printf("numbers before swapping:- \n");
    printf("p = %d and q = %d \n", p, q);
    
    swap(&p, &q);
    printf("numbers after swapping:- \n");
    printf("p = %d and q = %d \n", p, q);
    return 0;
}

int swap(int *a, int *b){
    int c;
    c = *a;
    *a = *b;
    *b = c;
    return 0;
}
