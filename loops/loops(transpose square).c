#include <stdio.h>
#include <math.h>

int main(){
    int n;
    printf("enter the size of the matrix :- ");
    scanf("%d", &n);
    int arr[n][n];
    int arrt[n][n];
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("enter value in cell [%d][%d] :- ", i, j);
            scanf("%d", &arr[i][j]);
            arrt[j][i] = arr[i][j];
        }
    }
    
    printf("ORIGINAL \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf(" %d ", arr[i][j]);
        }
        printf("\n");
    }
    
    printf("TRANSPOSE \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf(" %d ", arrt[i][j]);
        }
        printf("\n");
    }
    return 0;
}