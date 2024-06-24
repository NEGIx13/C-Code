#include <stdio.h>
#include <string.h>

int palin(char *s);

int main(){
//    char str[] = "maulik", str1[50] = "racecar";
    char str[50];
    printf("enter a string to check for palin:- ");
    scanf("%s", str);
    if(palin(str)){
        printf("%s is palindrome. \n", str);
    }
    else{
        printf("%s is not palindrome. \n", str);
    }
    return 0;
}

int palin(char *s){
    int len = strlen(s);
    for(int i=0; i<len/2 ;i++){
        if(s[i] != s[len - i - 1]){
            return 0;
        }
    }
    return 1;
}
