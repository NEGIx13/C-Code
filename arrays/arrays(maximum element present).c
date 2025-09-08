#include <stdio.h>
#include <math.h>

int main(){
    int n,max;
    printf("enter the size of the array:- ");
    scanf("%d", &n);
    int arr[n];
    
    for(int i=0;i<n;i++){
        printf("enter the element to be added:- ");
        scanf("%d", &arr[i]);
    }
    
    max = arr[0];
    for(int i=1;i<n;i++){
        if(max < arr[i]){
            max = arr[i];
        }
        else{
            continue;
        }
    }
    
    printf("the maximum number in the array is %d", max);
    return 0;
}
