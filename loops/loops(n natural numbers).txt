#include <stdio.h>
#include <math.h>

int main(){
    int n,sum = 0;
    printf("enter the natural number to be counted till:- ");
    scanf("%d", &n);
    
    printf("natural numbers in ascending order:- \n");
    for(int i=1;i<=n;i++){
        printf("%d \n", i);
        sum += i;
    }
    printf("total sum:- %d \n", sum);
    
    sum = 0;
    printf("natural number is reverse order:- \n");
    for(int i=n;i>0;i--){
        printf("%d \n", i);
        sum += i;
    }
    printf("total sum:- %d \n", sum);
    
    return 0;
}