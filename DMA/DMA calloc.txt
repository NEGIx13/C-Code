#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// calloc (continuous allocation)
int main(){
    int n;
    int *ptr;
    
    printf("enter total numbers to be added:- ");
    scanf("%d", &n);
    ptr = (float *) calloc(n, sizeof(float));
    
    for(int i=0;i<n;i++){
        printf("%f \n", ptr[i]);
    }
    return 0;
}
