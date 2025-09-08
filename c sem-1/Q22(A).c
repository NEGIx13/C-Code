#include <stdio.h>
#include <math.h>

int main(){
    int n;
    printf("enter the size of the triangle:- ");
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
