#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int n, i;
    printf("enter the size of the array:- ");
    scanf("%d", &n);
    
    int arr[n];
    int rev[n];
    for(i=0;i<n;i++){
        printf("enter the element %d :- ", i+1);
        scanf("%d", &arr[i]);
    }
    i--;
    
    for(int j=0;j<n;j++,i--){
        rev[j] = arr[i];
        printf("%d ", rev[j]);
    }
    return 0;
}
