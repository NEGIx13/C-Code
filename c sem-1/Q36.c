#include <stdio.h>
#include <math.h>

int main(){
    int n, sum = 0, avg;
    printf("enter size of the array:- ");
    scanf("%d", &n);
    
    int arr[n];
    for(int i=0;i<n;i++){
        printf("enter element %d :- ", i+1);
        scanf("%d", &arr[i]);
    }
    
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    avg = sum/n;
    
    printf("the sum of all elements of the array is:- %d \n", sum);
    printf("the aveage of all elements of the array is:- %d \n", avg);
    
    return 0;
}
