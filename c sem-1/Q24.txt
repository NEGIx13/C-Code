#include <math.h>
#include <stdio.h>

int main(){
    int n, count;
    count = 0;
    printf("enter a number to be checked:- ");
    scanf("%d", &n);
    for(int i=2;i<=n/2;i++){
        if(n%i == 0){
            count++;
        }
        else{
            continue;
        }
    }
    if(count == 0){
        printf("the number is prime ");
    }
    else{
        printf("the number is composite with %d factors ", count + 1);
    }
    return 0;
}
