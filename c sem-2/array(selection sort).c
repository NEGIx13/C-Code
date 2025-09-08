#include <stdio.h>
#include <math.h>

int main(){
    int n;
    printf("enter the size of the array:- ");
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("enter element no %d :- ", i+1);
        scanf("%d", &arr[i]);
    }
    
    for(int i=0;i<n-1;i++){
        int min = i;
        for(int j=i+1;j<n;j++){
            if(arr[min] > arr[j]){
                min = j;
            }
        }
        if(min != i){
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
        
    }
    
    printf("list sorted via selection sort is:- ");
    for(int i=0;i<n;i++){
        printf(" %d ", arr[i]);
    }
    return 0;
}