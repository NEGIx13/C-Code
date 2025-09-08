#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int n, count = 1;
    int *ptr;
    printf("enter the size of the DMA:- ");
    scanf("%d", &n);
    
    printf("first %d odd numbers \n", n);
    ptr = calloc(n, sizeof(int));
    for(int i=0;i<n;i++){
        ptr[i] = count;
        printf("%d \n", ptr[i]);
        count += 2;
    }
    
    count = 2;
    n++;
    printf("first %d even numbers \n", n);
    
    ptr = realloc(ptr, n);
    for(int j=0;j<n;j++){
        ptr[j] = count;
        printf("%d \n", ptr[j]);
        count += 2;
    }
    return 0;
}
