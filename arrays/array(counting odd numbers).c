#include <stdio.h>
#include <math.h>

int countodd(int arr[],int n);

int main(){
    int n,flag;
    flag = 1;
    printf("enter the size of the array:- ");
    scanf("%d", &n);
    int arr[n];
    
    for(int i=0;i<n;i++){
        arr[i] = flag;
        flag++;
    }
    
    printf("total odd numbers in the array are:- %d",countodd(arr, n));
    return 0;
}

int countodd(int arr[], int n){
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i] % 2 == 1){
            count++;
        }
        else{
            continue;
        }
    }
    return count;
}