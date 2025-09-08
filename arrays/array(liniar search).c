#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    int n, flag;
    float target;
//    float sum = 0;
    printf("enter the size of the array:- " );
    scanf("%d", &n);

    float arr[n];
    for(int i=0;i<n;i++){
        printf("enter element in the index %d - ", i);
 //       printf("element at index %d is :- %d \n", i, arr[i]);
        scanf("%f", &arr[i]);
    }
    
    printf("enter the target sum:- ");
    scanf("%f", &target);
    
    for(int j=0;j<n;j++){
        if(target == arr[j]){
            printf("number %5.2f is found at the index %d", target, j);
            flag = 1;
            break;
        }
        else{
            continue;
        }
    }
    if(flag != 1){
        printf("element not found in the array.");
    }
    return 0;
}
