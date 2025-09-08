#include <stdio.h>
#include <math.h>

void printfnum(int arr[], int n);
void printnum(int *arr, int n);

int main(){
    int n;
    printf("enter the size of the array:-");
    scanf("%d", &n);
    int arr[n];
    
    for(int i=0;i<n;i++){
        printf("enter the value to be added:- ");
        scanf("%d", &arr[i]);
    }
    
    printf("values in the array are:- \n");
    printfnum(arr, n);
    
    printf("\n values in the array are:- \n");
    printnum(arr, n);
    return 0;
}


void printfnum(int arr[], int n){
    for(int i=0;i<n;i++){
        printf("%d \t", arr[i]);
    }
}


void printnum(int *arr, int n){
    for(int i=0;i<n;i++){
        printf("%d \t", arr[i]);
    }
}
