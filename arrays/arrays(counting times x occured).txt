#include <stdio.h>
#include <math.h>

int main(){
    int n, x, count;
    printf("enter the size of the array:- ");
    scanf("%d", &n);
    int arr[n];
    
    for(int i=0;i<n;i++){
        printf("enter the element in the array:- ");
        scanf("%d", &arr[i]);
    }
    
    count = 0;
    printf("enter the number to be searched in the array:- ");
    scanf("%d", &x);
    for(int i=0;i<n;i++){
        if(arr[i] == x){
            count++;
        }
        else{
            continue;
        }
    }
    
    printf("the number you wanted to search occured %d times", count);
    return 0;
}
