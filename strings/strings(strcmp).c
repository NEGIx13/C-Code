#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
    char firstl[50], secl[50];
    printf("enter the first string to be compared:- ");
    fgets(firstl, 50, stdin);
    printf("enter the second string to be compared:- ");
    fgets(secl, 50, stdin);
    
    int d = strcmp(firstl, secl);
    printf("the total difference is:- %d \n", d);
    if(d == 0){
        printf("both strings are equal :) \n");
    }
    else if(d > 0){
        printf("first string is bigger : \n");
    }
    else if(d < 0){
        printf("second string is bigger : \n");
    }
    else{};
    
    return 0;
}