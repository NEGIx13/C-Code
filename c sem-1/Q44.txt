#include <stdio.h>
#include <string.h>

int main(){
    char a[50], b[50], copy[50] = "a";
    int len, i, same;
    printf("enter 1st string :- ");
    gets(a);
//    scanf("%s", a);
    printf("enter 2nd string :- ");
    gets(b);
//    scanf("%s", b);
    
    len = strlen(a);
    strcpy(copy, a);
    printf("strlen => 1st str size = %d \n", len);
    printf("strcpy => copy = ");
    puts(copy);
    
    same = strcmp(a, b);
    if(same > 0){
        printf("strcmp => %s is bigger \n", a);
    }
    else if(same < 0){
        printf("strcmp => %s is bigger \n", b);
    }
    else{
        printf("both strings are identical \n");
    }
    
    strcat(a, b);
    printf("strcat => after contatination :- ");
    puts(a);
    return 0;
}
