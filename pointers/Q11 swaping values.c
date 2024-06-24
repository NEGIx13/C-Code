#include <stdio.h>
#include <math.h>

int swap(int *a, int *b, int *c);

int main(){
    int a,b,c;
    printf("enter value a :- ");
    scanf("%d", &a);
    printf("enter value b :- ");
    scanf("%d", &b);
    printf("enter value c :- ");
    scanf("%d", &c);
    printf("\n");
    
    printf("value of a before:- %d \n", a);
    printf("value of b before:- %d \n", b);
    printf("value of c before:- %d \n \n", c);
    swap(&a, &b, &c);
    
    printf("value of a after:- %d \n", a);
    printf("value of b after:- %d \n", b);
    printf("value of c after:- %d \n \n", c);
    return 0;
}

int swap(int *a, int *b, int *c){
    int temp;
    temp += *a;
    *a = *c;
    *c = *b;
    *b = temp;
    return 0;
}


