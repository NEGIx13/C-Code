#include <stdio.h>
#include <math.h>

int main(){
    int a,b;
    printf("enter the first number to be compared:- ");
    scanf("%d", &a);
    printf("enter the second number to be compared:- ");
    scanf("%d", &b);
    if(a>b){
        printf("%d is greater than %d", a, b);
    }
    else{
        printf("%d is greater than %d", b, a);
    }
    return 0;
}
