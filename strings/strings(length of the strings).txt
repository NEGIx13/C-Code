#include <stdio.h>
#include <math.h>
#include <string.h>

int count(char arr[]);

int main(){
    int s;
    char name[50];
    
    printf("enter the sentence you want the size off:- ");
    fgets(name, 50, stdin);
    printf("total length of the string is :- %d \n", count(name));
    s = strlen(name);
    printf("total length of the string is :- %d", strlen(name));
    return 0;
}

int count(char arr[]){
    int count = 0;
    for(int i=0;arr[i] != '\0';i++){
        count++;
    }
    return count-1;
}

