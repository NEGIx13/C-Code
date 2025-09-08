#include <stdio.h>
#include <math.h>
#include <string.h>

int convert(char str[]);

int main(){
    char str[100];
    printf("enter the string to be checked:- ");
    fgets(str, 100, stdin);
    convert(str);
    return 0;
}


int convert(char str[]){
    for(int i=0;str[i]!='\0';i++){
        if(str[i] == 'a'){
            str[i] = 'A';
        }
        else if(str[i] == 'e'){
            str[i] = 'E';
        }
        else if(str[i] == 'i'){
            str[i] = 'I';
        }
        else if(str[i] == 'o'){
            str[i] = 'O';
        }
        else if(str[i] == 'u'){
            str[i] = 'U';
        }
        else{
            continue;
        }
    }
    printf("the string converted is:- \n");
    puts(str);
}