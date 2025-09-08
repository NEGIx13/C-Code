#include <stdio.h>
#include <math.h>
#include <string.h>

int countvou(char string[]);

int main(){
    int count;
    char arr[100];
    printf("enter a sting to check for vowels:- ");
    fgets(arr, 100, stdin);
//    scanf("%s", arr);
    count = countvou(arr);
    printf("total no of vowels in the string are:- %d", count);
    return 0;
}


int countvou(char string[]){
    int vou = 0;
    for(int i=0;string[i]!='\0';i++){
        if(string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u'){
            vou++;
        }
        else{
            continue;
        }
    }
    return vou;
}