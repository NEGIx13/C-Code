#include <stdio.h>
#include <math.h>


void printstring(char arr[]);


int main(){
    char name[100];
    char surname[] = "";
    
    printf("enter your first name:-");
    gets(name);
    puts(name);
    printf("enter your full name:- ");
    fgets(surname, 50, stdin);
    puts(surname);
    
    // printf("%s \t %s \n", name, surname);
    // printstring(name);
    // printf("\n");
    // printstring(surname);
    return 0;
}