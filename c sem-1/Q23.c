#include <stdio.h>
#include <math.h>

int main(){
    int n, cpy, sum, digit, reverse;
    printf("enter any number to be formatted:- ");
    scanf("%d", &n);
    cpy = n;
    sum = 0;
    reverse = 0;
    while(cpy>0){
        digit = cpy%10;
        sum += digit;
        cpy /= 10;
    }
    
    do{
        digit = n%10;
        reverse = reverse*10 + digit;
        n /= 10;
    }
    while(n>0);
    
    printf("the sum of the digits is:- %d \n", sum);
    printf("the reverse of the digit is:- %d \n", reverse);
    return 0;
}
