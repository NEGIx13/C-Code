#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    FILE *ptr;
    int n;
    char a[100];
    ptr = fopen("Q4.txt", "w");
    if(ptr == NULL){
        printf("error opening the file");
        exit(1);
    }
    else{
        printf("file opened successfully");
    }

    printf("enter the number of lines you want to write:-");
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        printf("enter line %d :- ", i);
        fgets(a, 100, stdin);
        fprintf(ptr, "%s", a);
    }
    fclose(ptr);

    ptr = fopen("Q4.txt", "r");
    int arr[n];
    return 0;
}