#include <stdio.h>
#include <math.h>

int palin(int arr[], int n);

int main(){
    int n;
    printf("enter the size of the array:- ");
    scanf("%d", &n);
    int arr[n];
    
    palin(arr,n);
    printf("the elements in the array are:- \n");
    for(int i=0;i<n;i++){
        printf("%d \t", arr[i]);
    }
    return 0;
}


int palin(int arr[], int n){
    arr[0] = 0;
    arr[1] = 1;
    for(int i=2;i<n;i++){
        arr[i] = arr[i-1] + arr[i-2];
    }
    return 0;
}