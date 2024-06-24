#include <stdio.h>

int main(){
    char a, b, c;
    printf("enter 2 characters to be evaluated:- ");
    scanf("%c%c", &a, &b);
    printf("the characters are %c and %c \n", a, b);
    printf("ASCII value of the characters is :- %d  and %d \n", a, b);
    //adding ASICC values of a and b
    c = a+b;
    printf("the sum of the ASCII values is %d \n", c);
    return 0;
}
