#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
    char name[100], c;
    int n = 0;
//    printf("enter the size of the string:- ");
//    scanf("%d", &n);
    printf("enter the letters:- ");
    while(c != '\n'){
    
        scanf("%c", &c);
        name[n] = c;
        n++;
    }
    
    printf("the string entered is:- ");
    puts(name);
    return 0;
}