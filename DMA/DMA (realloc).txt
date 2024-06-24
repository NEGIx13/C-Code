#include <stdio.h>
#include <math.h>
#include <stdlib.h>
// re allocation (realloc)
int main(){
    int n;
    int *ptr;
    printf("enter the size of the memory:- ");
    scanf("%d", &n);
    
    ptr = (int *) calloc(n, sizeof(int));
    for(int i=0;i<n;i++){
        printf("%d \n", ptr[i]);
    }
    
    printf("updated size to 8 \n");
    
    ptr = realloc(ptr, n+3);
    ptr = (int *) calloc(n, sizeof(int));
    for(int i=0;i<n+3;i++){
        printf("%d \n", ptr[i]);
    }
    return 0;
}
