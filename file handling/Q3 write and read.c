#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *ptr;
    int n;
    char a[100];
    char str;

    ptr = fopen("Q3.txt", "w");

    if(ptr == NULL){
        printf("file not found ");
        exit(1);
    }
    else{
        printf("file opened successfully");
    }

    printf("enter the number of lines you want to write:- ");
    scanf("%d", &n);

    for(int i=0;i<n;i++){
        printf("enter line no %d :- \n", i);
        fgets(a, 100, stdin);
        fprinff(ptr, "%s", a);
    }
    fclose(ptr);

    ptr = fopen("Q3.txt", "r");
        while(ptr == EOF){
            printf("%s", str);
            str = getc(ptr);
        }
    fclose(ptr);
    return 0;
}