#include <stdio.h>
#include <math.h>
#include <string.h>

void brem(char arr[]);

int main(){
    char str[100];
    printf("enter a string for which the blank spaces to be removed:- ");
    fgets(str, 100, stdin);
    brem(str);
    return 0;
}


void brem(char arr[]){
    char bstr[100];
    int index = 0;
    for(int i=0;arr[i]!='\0';i++){
        if(arr[i] == ' '){
            continue;
            index++;
        }
        else{
            bstr[index] = arr[i];
            index++;
        }
    }
    printf("the string without spaces is as follows:- \n");
    puts(bstr);
}
