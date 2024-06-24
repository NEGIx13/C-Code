#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
    int n, length;
    int count = 1;
    char name[30];
    
    printf("enter your name:- ");
    fgets(name, 30, stdin);
    length = strlen(name) - 1;
    
    printf("this table is made by ");
    puts(name);
    printf(" \n the name is %d characters long \n", length);
    
    printf("enter the size of the pattern :- ");
    scanf("%d", &n);
    
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            printf(" %d ", count);
            count++;
        }
        printf("\n");
    }
    return 0;
}