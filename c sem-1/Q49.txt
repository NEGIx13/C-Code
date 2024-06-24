#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
    int n, a;
    printf("enter the size of the array:- ");
    scanf("%d", &n);
    int *ptr[n];
    
    for(int i=0;i<n;i++){
        printf("enter the element to be added:- ");
        scanf("%d", &a);
        ptr[i] = &a;
    }
    
    for(int i=0;i<n;i++){
        printf("%d \n", *ptr[i]);
//        scanf("%d", &ptr[i]);
    }
    
    
    return 0;
}