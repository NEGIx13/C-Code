#include <stdio.h>
#include <math.h>

int main(){
    int i, n;
    printf("enter the size of pattern you want:- ");
    scanf("%d", &n);
    for(i=0;i<=n;i++){
        for(int j=0;j<i;j++){
            printf("*");
        }
        printf("\n");
    }
    
    for(i=n;i>1;i--){
        for(int j=1;j<i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}