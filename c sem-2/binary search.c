#include <stdio.h>
#include <math.h>

int binary_search(int min, int max, int arr[], int target);

int main(){
    int n, target, ans;
    printf("enter the size of the array:- ");
    scanf("%d", &n);
    int arr[n];
    
    for(int i=0;i<n;i++){
        printf("the a element to the array: ");
        scanf("%d", &arr[i]);
    }
    
    printf("enter the number you want to find:-");
    scanf("%d", &target);
    
    ans = binary_search(0, n-1, arr, target);
    if(ans == -1){
        printf("value not found in the list");
    }
    else{
        printf("the target value (%d) was found at index %d", target,ans);
    }
    return 0;
}

int binary_search(int min, int max, int arr[], int target){
        if(min > max){
            return -1;
        }
    
        int mid = (min+max)/2;
        if(target == arr[mid]){
            return mid;
        }
        if(target > arr[mid]){
            binary_search(mid+1, max, arr, target);
        }
        else{
            binary_search(min, mid-1, arr, target);
        }
 //       return -1;
}