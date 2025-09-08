#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int n;
    int *ptr;
    printf("enter the size of the list:- ");
    scanf("%d", &n);
    
    ptr = (int *) calloc(n, sizeof(int));
    for(int i=0;i<=n;i++){
        printf("%d \n", ptr[i]);
    }
    
    free(ptr);
    
    ptr = (char *) calloc(n-3, sizeof(char));
    for(int j=0;j<0;j++){
        printf("%d \n", ptr[j]);
    }
    return 0;
}
