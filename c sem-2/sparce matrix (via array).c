#include <stdio.h>
#include <math.h>

//struct triple{
//    int r;
//    int c;
//   int val;
//};

//  0 0 1
//  4 0 3
//  0 8 0


int main(){
    
    printf("sparse matrix is as follow:- \n");
    
    int arr[3][3] = {{0,0,1},{4,0,3},{0,8,0}};
    int n;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf(" %d ", arr[i][j]);
            if(arr[i][j] != 0){
                n++;
            }
        }
        printf("\n");
    }
    
    printf("\n");
    
    int t[n+1][3];
    t[0][0] = 3;
    t[0][1] = 3;
    t[0][2] = n;
    int r = 0;
//    int y = 1;
//    int z = 1;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j] != 0){
                r++;
                t[r][0] = i;
                t[r][1] = j;
                t[r][2] = arr[i][j];

            }
        }
    }
    
    printf("triplet matrix is as follow:- \n");
    for(int i=0;i<n+1;i++){
        for(int j=0;j<3;j++){
            printf(" %d ", t[i][j]);
        }
        printf("\n");
    }
//    struct triple s1[n+1];
    return 0;
}