#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
    int n, *ptr, sum = 0;
    printf("enter the size of the array:- ");
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("enter the element to be added:- ");
        scanf("%d", &arr[i]);
    }
    ptr = arr;
    for(int i=0;i<n;i++){
        sum += *(ptr+i)  ;
    }
    printf("total sum of the array is :- %d", sum);
    return 0;
}
