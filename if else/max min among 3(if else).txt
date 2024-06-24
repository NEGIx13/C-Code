#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c;
    printf("enter first no :- ");
    scanf("%d", &a);
    printf("enter second no :- ");
    scanf("%d", &b);
    printf("enter third no :- ");
    scanf("%d", &c);
    
    if(a>b && a<c){
        printf("%d is the smallest \n", b);
        printf("%d is the largest \n", c);
    }
    if(b>a && b<c){
        printf("%d is the smallest \n", a);
        printf("%d is the largest \n", c);
    }
    if(c>b && c<a){
        printf("%d is the smallest \n", b);
        printf("%d is the largest \n", a);
    }
    return 0;
}
