#include<stdio.h>
#include<math.h>

int main(){
    int n,fact = 1;
    printf("enter the number for which you want to find the factorial:- ");
    scanf("%d", &n);
    
    for(int i=1;i<=n;i++){
        fact *= i;
    }
    printf("the factorial of the number is %d", fact);
}