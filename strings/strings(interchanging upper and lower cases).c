#include <stdio.h>
#include <math.h>
#include <string.h>

void convert(char arr[]);

int main(){
    char str[100];
    printf("enter a string to be converted:- ");
    fgets(str, 100, stdin);
    convert(str);
    return 0;
}


void convert(char arr[]){
    for(int i=0;arr[i]!='\0';i++){
        if(arr[i] >= 'A' && arr[i] <= 'Z'){
            arr[i]+= 32;
        }
        else if(arr[i] >= 'a' && arr[i] <= 'z'){
            arr[i]-= 32;
        }
        else{
            continue;
        }
    }
    printf("the string with interchanged cases is as follows:- \n");
    puts(arr);
}
