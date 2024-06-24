#include <stdio.h>
#include <math.h>

int main(){
    int n, i,j;
    int *ptr;
    printf("enter the size of the array:- ");
    scanf("%d", &n);
    int arr[n];
    *ptr = &arr[0];
    for(i=0;i<n;i++){
        printf("enter the value to be added:- ");
        scanf("%d", ptr+i);
    }
    
//    *ptr = &arr[0];
    for(j=0;j<n;j++){
        printf("%d", *(ptr+j));
    }
    return 0;
}