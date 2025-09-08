#include <stdio.h>
#include <math.h>

int main(){
    int n;
    while(1){
        printf("enter the number to be checked:- ");
        scanf("%d",&n);
        if(n%7 != 0){
            printf("phew you are good to go!! %d \n", n);
        }
        else{
            break;
        }
    }
    printf("oppsi you entered a multiple of 7!! GGs.");
}