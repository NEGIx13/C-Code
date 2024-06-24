#include <stdio.h>
#include <math.h>

int main(){
    int n,sum, m;
    sum = 0;
    m = 1;
    printf("enter the number for which you want to add odd numbers:- ");
    scanf("%d", &n);
    for(int i=1;i<=(n+1)/2;i++){
        printf("a");
        sum += m;
        m+= 2;
    }
    printf("sum of all odd numbers till %d is :- %d", n, sum);
    return 0;
}
