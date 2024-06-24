#include <stdio.h>
#include <string.h>

int main(){
    char str[40];
    int n=0, len=-1, vou = 0;
    printf("enter a string to be checked:- ");
    do{
        str[n] = getchar();
 //       n++;
        len++;
    }
    while(str[n++] != '\n');
    str[n-1] = '\0';
    
    for(int i=0;i<len;i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
            vou++;
        }
        else{
            continue;
        }
    }
    
    printf("string given :- %s \n", str);
    printf("total length:- %d \n", len);
    printf("vowels :- %d \n", vou);
    return 0;
}
