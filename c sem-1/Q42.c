#include <stdio.h>
#include <string.h>

int main(){
    char a[50], b[50];
    int i, j,same = 1;
    printf("enter first string :- ");
    scanf("%s", a);
    printf("enter second string :- ");
    scanf("%s", b);
    
    for(i = 0;a[i] != '\0';i++){
        if (a[i] != b[i]){
            same = 0;
        }
        else{
            continue;
        }
    }
    if(same){
        printf("the strings are identical \n");
    }
    else{
        printf("the strings are not identical \n");
    }
    
    for(j=0;b[j] != '\0';j++){
        a[i+j] = b[j];
    }
    a[i+j] = '\0';
    printf("concatinated string :- %s", a);
    return 0;
}
