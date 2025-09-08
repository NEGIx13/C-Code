#include <stdio.h>
#include <math.h>
#include <limits.h>

int main(){
    int n, max = INT_MIN, min = INT_MAX;
    printf("enter size of the array:- ");
    scanf("%d", &n);
    
    int arr[n];
    for(int i=0;i<n;i++){
        printf("enter element %d :- ", i+1);
        scanf("%d", &arr[i]);
    }
    
    for(int i=0;i<n;i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }
    
    printf("maximum value of the array is:- %d \n", max);
    printf("minimum value of the array is:- %d \n", min);
    return 0;
}
