#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
    char first[50], last[50];
    printf("enter the first name:- ");
    fgets(first, 50, stdin);
    printf("enter the last name:- ");
    fgets(last, 50, stdin);
    
    puts(first);
    puts(last);
    
    strcat(first, last);
    puts(first);
    puts(last);
    return 0;
}