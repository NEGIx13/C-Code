#include <stdio.h>
#include <math.h>

int main(){
    int x, y;
    printf("enter the size of the matrix");
    printf("enter rows:- ");
    scanf("%d", &x);
    printf("enter collumns:- ");
    scanf("%d", &y);
    int arr[x][y];
    int arrt[y][x];
    
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            printf("enter value in cell [%d][%d] :- ", i, j);
            scanf("%d", &arr[i][j]);
            arrt[j][i] = arr[i][j];
        }
    }
    
    printf("ORIGINAL \n");
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            printf(" %d ", arr[i][j]);
        }
        printf("\n");
    }
    
    printf("TRANSPOSE \n");
    for(int i=0;i<y;i++){
        for(int j=0;j<x;j++){
            printf(" %d ", arrt[i][j]);
        }
        printf("\n");
    }
    return 0;
}