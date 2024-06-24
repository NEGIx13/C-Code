#include <stdio.h>
#include <math.h>

int main(){
    int n,m;
    printf("enter the total students names:- ");
    scanf("%d", &n);
    
    printf("enter total subjects to be recorded:- ");
    scanf("%d", &m);
    
    int arr[n][m+1];
    for(int i=0;i<n;i++){
        printf("enter the roll number of the student:- ");
        scanf("%d", &arr[i][0]);
        for(int j=1;j<=m;j++){
            printf("enter the marks of the student(each sub):- ");
            scanf("%d", &arr[i][j]);
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m+1;j++){
            printf("%d \t", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}