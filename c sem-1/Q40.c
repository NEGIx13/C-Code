#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    int n, flag = 1, f1, t;
    float target;
//    float sum = 0;
    printf("enter the size of the array:- " );
    scanf("%d", &n);
    
    float arr1[n][n];
    float arr2[n][n];
    float arr3_sum[n][n];
    float arr3_sub[n][n];
    float arr3_pro[n][n];
    float arr3_tra[n][n];
    
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
    
    while(flag == 1){
    printf("enter which funtion you want to perform. \n 1) Add 2) Subtract 3) product 4) transpose 5) exit :- ");
    scanf("%d", &f1);
    switch (f1){
        case 1: 
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
 //           printf("enter element in the index (%d ,%d) :-", i, j);
 //           printf("element at index %d is :- %d \n", i, arr[i]);
                arr3_sum[i][j] = arr2[i][j] + arr1[i][j];
                printf("%5.2f ", arr3_sum[i][j]);
            }
            printf("\n");
        }
        break;
    
        case 2:
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
 //           printf("enter element in the index (%d ,%d) :-", i, j);
 //           printf("element at index %d is :- %d \n", i, arr[i]);
                arr3_sub[i][j] = arr1[i][j] - arr2[i][j];
                printf("%5.2f ", arr3_sub[i][j]);
            }
            printf("\n");
        }
        break;
        
        case 3:
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                arr3_pro[i][j] = 0;
                for(int k=0;k<n;k++){    
                    arr3_pro[i][j]+=arr1[i][k]*arr2[k][j]; 
                }
                printf("%5.2f ", arr3_pro[i][j]);
            }
            printf("\n");
        }
        break;
        case 4:
        printf("enter the number of the array you want transpose of:- ");
        scanf("%d", &t);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(t == 1){
                    arr3_tra[i][j] = arr1[j][i];
                }
                else{
                    arr3_tra[i][j] = arr2[j][i];
                }
                printf("%f"), arr3_tra[i][j];
            }
            printf("\n");
        }
        break;
        case 5:
        printf("than you for using this program. \n END");
        flag = 0;
        break;
        default:
        break;
    }
    }
    return 0;
}
