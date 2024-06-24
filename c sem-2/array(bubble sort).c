#include<stdio.h>
#include<math.h>

int main(){
    int n;
    printf("enter the size of the array:- ");
    scanf("%d", &n);
    int arr[n];
    
    for(int i=0;i<n;i++){
        printf("the a element to the array: ");
        scanf("%d", &arr[i]);
    }
    
    for(int j=1;j<n;j++){
        for(int k=0;k<n-1;k++){
            if(arr[k] > arr[k+1]){
                int temp = arr[k+1];
                arr[k+1] = arr[k];
                arr[k] = temp;
            }
            else{
                continue;
            }
        }
    }
    printf("list sorted via bubble sort is:- ");
    for(int l=0;l<n;l++){
        printf(" %d ", arr[l]);
    }
    return 0;
}