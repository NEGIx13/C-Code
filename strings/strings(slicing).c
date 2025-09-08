#include <stdio.h>
#include <string.h>
#include <math.h>

void slice(int n, int m, char string[]);

int main(){
    int n, m;
    char string[100];
    printf("enter the starting index from where you want the slicing:- ");
    scanf("%d", &n);
    printf("enter the ending index from where you want the slicing to end:- ");
    scanf("%d", &m);
    printf("enter the string:- ");
    scanf("%s", string);
    
    slice(n, m, string);
    return 0;
}

void slice(int n, int m, char string[]){
    int count = 0;
    char chop[100];
    
    for(int i=n;i<=m;i++){
        chop[count] = string[i];
        count++;
    }
    printf("the sliced string is:- %s", chop);
}