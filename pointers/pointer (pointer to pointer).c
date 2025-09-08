#include <stdio.h>
#include <math.h>

int main(){
    int a = 15;
    int *ab = &a;
    int **abc = &ab;
    
    printf("*ab = %d \n", *ab);
    printf("**abc = %d", **abc);
    return 0;
}