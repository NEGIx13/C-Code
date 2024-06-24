#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
    char fullname[100];
    printf("enter the name of the person:- ");
    fgets(fullname, 100, stdin);
    
    puts(fullname);
    printf("%d", strlen(fullname) - 1); //my strlen counts the null element too
    return 0;
}