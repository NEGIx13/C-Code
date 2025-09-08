#include <stdio.h>
#include <math.h>

int main(){
    int n,a,b,c;
    printf("enter the size of the array:- ");
    scanf("%d", &n);
    int arr[n], rev[n];
    for(int i=0;i<n;i++){
        printf("enter a element in the array:- ");
        scanf("%d", &arr[i]);
    }
    
    for(int i=0;i<=n/2;i++){
        if(arr[n-1-i] == arr[i]){
            rev[i] = arr[i];
            break;
        }
        rev[i] = arr[n-1-i];
        rev[n-1-i] = arr[i];
    }
    
    printf("the reversed list is as follows:- \n");
    for(int i=0;i<n;i++){
        printf("%d \t", rev[i]);
    }
    return 0;
}
