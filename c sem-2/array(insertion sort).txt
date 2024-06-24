#include <stdio.h>
#include <math.h>

int insertion_sort(int arr[], int n);

int main(){
    int n;
    printf("enter the size of the array:- ");
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("enter element no %d :- ", i+1);
        scanf("%d", &arr[i]);
    }
    
    insertion_sort(arr, n);
    
    printf("list sorted via insertion sort is:- ");
    for(int i=0;i<n;i++){
        printf(" %d ", arr[i]);
    }
    return 0;
}

int insertion_sort(int arr[], int n){
    int min;
    for(int i=1;i<n;i++){
        min = arr[i];
        int j = i-1;
        while(j >= 0 && arr[j] > min){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = min;
    }
}	0