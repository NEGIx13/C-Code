#include <stdio.h>
#include <math.h>

int rev(int rarr[n], int *ptr,int n);

int main(){
    int n, *ptr;
    printf("enter the size of the array:- ");
    scanf("%d", &n);
    int arr[n], rarr[n];
    for(int i=0;i<n;i++){
        printf("enter the element to be added:- ");
        scanf("%d", &arr[i]);
    }
    
    *ptr = &arr[n-1];
    rev(rarr[n], *ptr, n);
    for(int i=0;i<n;i++){
        printf("the reversed list is:- %d", rarr[i])
    }
    return 0;
}


int rev(int rarr[n], int *ptr, int n){
//    int count = 0;
    for(int i=0; i<n;i++){
        rarr[i] = &ptr - i;
//        count++;
    }
    return 0;
}