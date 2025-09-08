#include <stdio.h>
#include <math.h>
#include <string.h>

int findch(char str[], char check);

int main(){
    char str[100];
    char check;
    printf("enter a string:- ");
    fgets(str, 100, stdin);
    
    printf("enter a character to be searched:- ");
    scanf("%c", &check);
    
    if(findch(str, check) == 1){
        printf("yes --%c-- is present in the string .", check);
    }
    else{
        printf("im sorry --%c-- is not present in the string", check);
    }
    return 0;
}

int findch(char str[], char check){
    int ans = 0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i] == check){
            ans = 1;
        }
        else{
            continue;
        }
    }
    return ans;
}