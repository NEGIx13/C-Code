#include <stdio.h>
#include <math.h>

int main(){
    int n, n1;
    printf("enter the total number of tables you want to enter:- ");
    scanf("%d", &n);
    
    int arr[n][10];
    for(int i=0;i<n;i++){
        printf("enter the number for which you want the table to be formed:-");
        scanf("%d", &n1);
        for(int j=1;j<11;j++){
            arr[i][j-1] = n1*j;
        }
    }
    
    printf("the 2D array of tables is as follows:- \n ");
    for(int i=0;i<n;i++){
        for(int j=0;j<10;j++){
            printf("%d \t", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}