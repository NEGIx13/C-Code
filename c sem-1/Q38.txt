#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int n, target;
    printf("enter the size of the array:- ");
    scanf("%d", &n);
    
    int arr[n];
    for(int i=0;i<n;i++){
        printf("enter the element %d :- ", i+1);
        scanf("%d", &arr[i]);
    }
    
    printf("enter search element:-");
    scanf("%d", &target);
    
    for(int i=0;i<n;i++){
        if(arr[i] == target){
            printf("number %d is found at %d index", target, i);
        }
    }
    
    return 0;
}
