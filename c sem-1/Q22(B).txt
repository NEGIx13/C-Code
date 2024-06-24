#include <stdio.h>
#include <math.h>

int main(){
    int n;
    printf("enter the size of the triangle:- ");
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
