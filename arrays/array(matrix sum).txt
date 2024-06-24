#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    int n, flag;
    float target;
//    float sum = 0;
    printf("enter the size of the array:- " );
    scanf("%d", &n);

    float arr1[n][n];
    float arr2[n][n];
    float arr3_sum[n][n];
    float arr3_sub[n][n];
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("enter element in the index (%d ,%d) :-", i, j);
 //           printf("element at index %d is :- %d \n", i, arr[i]);
            scanf("%f", &arr1[i][j]);
        }
    }
    
    printf("\n");
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("enter element in the index (%d ,%d) :-", i, j);
 //           printf("element at index %d is :- %d \n", i, arr[i]);
            scanf("%f", &arr2[i][j]);
        }
    }
    
    printf("\n");
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
 //           printf("enter element in the index (%d ,%d) :-", i, j);
 //           printf("element at index %d is :- %d \n", i, arr[i]);
            arr3_sum[i][j] = arr2[i][j] + arr1[i][j];
            printf("%5.2f ", arr3[i][j]);
        }
        printf("\n");
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
 //           printf("enter element in the index (%d ,%d) :-", i, j);
 //           printf("element at index %d is :- %d \n", i, arr[i]);
            arr3_sub[i][j] = arr2[i][j] + arr1[i][j];
            printf("%5.2f ", arr3[i][j]);
        }
        printf("\n");
    }
    return 0;
}
