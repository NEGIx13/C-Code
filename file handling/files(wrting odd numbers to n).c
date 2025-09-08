#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
    int n;
    FILE *fptr;
    fptr = fopen("while loop.txt", "w");
    
    printf("enter the limit for which you want odd numbers off");
    scanf("%d", &n);
    
    for(int i=1;i<=n;i+2){
        fprintf(fptr,"%d \t", i);
    }
    
    fclose(fptr);
    return 0;
}