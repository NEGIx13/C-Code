#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptr;
    int *ptr1;
    int *ptr2;
    
    int arr[10];
    char name[50];
    ptr = (int *) malloc(5 * sizeof(int));
    ptr1 = (int *) calloc(5, sizeof(int));
    ptr2 = realloc(ptr2, 5+3);
    free(ptr2);
//    exit(1);
    return 0;
}