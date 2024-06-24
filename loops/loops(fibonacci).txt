#include <stdio.h>
#include <math.h>

int main(){
    int n, n3;
    printf("enter the size of the fibo series you want:- ");
    scanf("%d", &n);
    int n1 = 0;
    int n2 = 1;
    printf("%d  %d ", n1, n2);
    for(int i=0;i<n-2;i++){
        n3 = n1 + n2;
        printf(" %d ", n3);
        n1 = n2;
        n2 = n3;
    }
    return 0;
}