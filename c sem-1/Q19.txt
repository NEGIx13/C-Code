#include <stdio.h>
#include <math.h>

int main(){
    int num;
    printf("enter a 4 digit number:- ");
    scanf("%d", &num);
    while(num>0){
        int degit;
        degit = num%10;
        printf("the degits are:- %d \n", degit);
        num = num/10;
    }
    return 0;
}
