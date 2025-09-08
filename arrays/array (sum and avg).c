#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
    int n;
    float sum = 0;
    printf("enter the size of the array:- " );
    scanf("%d", &n);
    
    int arr[n];
    for(int i=0;i<n;i++){
        printf("enter element in the index %d - ", i);
        scanf("%d", &arr[i]);
    }
    
    for(int j=0;j<n;j++){
        printf("element at index %d is :- %d \n", j, arr[j]);
        sum += arr[j]; 
    }
    
    printf("sum = %5.0f \n avg = %5.2f ", sum, sum/n);
    return 0;
}
