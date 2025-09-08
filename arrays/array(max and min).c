#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
    int n, max, min;
//    float sum = 0;
    printf("enter the size of the array:- " );
    scanf("%d", &n);
    
    int arr[n];
    for(int i=0;i<n;i++){
        printf("enter element in the index %d - ", i);
 //       printf("element at index %d is :- %d \n", i, arr[i]);
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    min = arr[1];
    
    for(int j=2;j<n;j++){
        if(arr[j] > max){
            max = arr[j];
        }
        if(arr[j] < min){
            min = arr[j];
        }
    //    sum += arr[j]; 
    }
    printf("the maximum element is:- %d \n", max);
    printf("the minimum element is:- %d", min);
    return 0;
}
