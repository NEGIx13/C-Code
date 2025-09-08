// WAP to check if the number is devisible by 2
#include <stdio.h>

int main(){
    int n;
    printf("enter the number to be checked:- ");
    scanf("%d", &n);
    
    printf("%d", n%2 == 0);
    
    return 0;
}