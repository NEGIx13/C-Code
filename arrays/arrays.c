#include <stdio.h>
#include <math.h>


int main(){
    int arr[3];
    
    printf("enter marks of maths:- ");
    scanf("%d", &arr[0]);
    printf("enter marks of science:- ");
    scanf("%d", &arr[1]);
    printf("enter marks of eng:- ");
    scanf("%d", &arr[2]);
    
    printf("maths:- %d \n science :- %d \n eng:- %d \n", arr[0], arr[1], arr[2]);
    return 0;
}