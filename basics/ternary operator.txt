#include <stdio.h>
#include <math.h>

int main(){
    int a,b,c;
    printf("enter the value to  be compaired(1st):- ");
    scanf("%d", &b);
    printf("enter the value to  be compaired(2nd):- ");
    scanf("%d", &c);
    a = (b > c)? b:c;
    
    printf("greater number is:- %d", a);
    return 0;
}
