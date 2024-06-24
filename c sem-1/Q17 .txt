#include <stdio.h>
#include <math.h>

int main(){
    int a,b;
    char c;
    
    printf("enter the operator to be used:- ");
    scanf("%c", &c);
    printf("enter first number to be evaluated:- ");
    scanf("%d", &a);
    printf("enter second number to be evaluated:- ");
    scanf("%d", &b);
    
    switch (c) {
        case '+': printf("sum of the 2 numbers is:-  \n == %d", a+b);
                break;  
        case '-': printf("difference of the 2 numbers is:-  \n == %d", a-b);
                break;
        case '*': printf("product of the 2 numbers  is :- \n == %d", a*b);
                break;
        case '/': printf("division of the 2 numbers is:-  \n == %d", a/b);
                break;
        case '%': printf("modulus of the 2 numbers is:-  \n == %d", a%b);
                break;
        default : printf("incorrect operator \n" );
                break;
    }    
    return 0;
}
