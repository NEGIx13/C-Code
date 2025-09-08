#include <stdio.h>
#include <math.h>


void printstring(char arr[]);


int main(){
    char name[100];
    char surname[100];
    
    printf("enter your first name:-");
    scanf("%s", name);
    
    printf("enter your last name:- ");
    scanf("%s", surname);
    
    printf("%s \t %s \n", name, surname);
    printstring(name);
    printf("\n");
    printstring(surname);
    return 0;
}


void printstring(char arr[]){
    for(int i=0;arr[i] != '\0'; i++){
        printf("%c", arr[i]);
    }
