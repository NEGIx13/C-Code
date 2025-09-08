#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void printline_c(char c, int n);

void printline();

int main(){
    int b;
    char a;
    
    printf("enter the sumbol you want the line off:- ");
    scanf("%c", &a);
    printf("enter the length of the line:- ");
    scanf("%d", &b);
    
    printf("the next line will be as follows:- \n");
    printline();
    printf("the next line will give you a custom line of custom length:- \n");
    printline_c(a,b);
    return 0;
}

void printline(){
    for(int i=0;i<30;i++){
        printf("*");
    }
    printf("\n");
}

void printline_c(char c, int n){
    for(int i=0;i<n;i++){
        printf("%c", c);
    }
    printf("\n");
}