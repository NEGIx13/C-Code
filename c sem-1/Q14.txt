#include <stdio.h>
#include <math.h>

int main(){
    int a,b,c;
    printf("enter the first number to be compared:- ");
    scanf("%d", &a);
    printf("enter the second number to be compared:- ");
    scanf("%d", &b);
    printf("enter the third number to be compared:- ");
    scanf("%d", &c);
    
    if(a>b && a>c){
        printf("%d is the greatest number of all 3.", a);
    }
    else if(b>a && b>c){
        printf("%d is the greatest number of all 3.", b);
    }
    else{
        printf("%d is the greatest number of all 3.", c);
    }
    return 0;
}