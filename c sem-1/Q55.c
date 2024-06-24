#include <stdio.h>
#include <math.h>
#include <stdlib.h>
// malloc (memory allocation)
int main(){
    int *ptr;
    int n;
    
    printf("enter the total numbers to be added:- ");
    scanf("%d", &n);
    
    ptr = (int *) malloc(n * sizeof(int));
    
    for(int i=0;i<n;i++){
        printf("enter the value:- ");
        scanf("%d", &ptr[i]);
    }
    
    for(int j=0;j<n;j++){
        printf(" the value no %d is :- %d \n", j+1, ptr[j]);
    }
    
    free(ptr);
    
    printf("enter array size to be changed:- ");
    scanf("%d", &n);
    
    ptr = (int *) malloc(n * sizeof(int));
    for(int i=0;i<n;i++){
        printf("enter the value of updated array:- ");
        scanf("%d", &ptr[i]);
    }
    
    for(int j=0;j<n;j++){
        printf(" the value no %d is :- %d \n", j+1, ptr[j]);
    }
    return 0;
}
