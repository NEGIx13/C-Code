#include <stdio.h>
#include <math.h>
#include <limits.h>

int main(){
    int arr[3];
    int max = INT_MIN;
    int min = INT_MAX;
    printf("enter 1st no :- ");
    scanf("%d", &arr[0]);
    printf("enter 2nd no :- ");
    scanf("%d", &arr[1]);
    printf("enter 3rd no :- ");
    scanf("%d", &arr[2]);
    
    for(int i=0;i<3;i++){
        if(arr[i]>max){
            max = arr[i];
        }
        if(arr[i]<min){
            min = arr[i];
        }
    }
    
    printf("maximum no :- %d \n minimum no :- %d \n", max, min);
    return 0;
}