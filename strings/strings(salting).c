#include <stdio.h>
#include <math.h>
#include <string.h>

void salting(char arr[]);

int main(){
    char pass[50];
    printf("enter a password for the server:- ");
//    fgets(pass, 50, stdin);
    scanf("%s", &pass);
    printf("the password after salting is:- \n");
    salting(pass);
    return 0;
}


void salting(char arr[]){
    char newpass[100];
    char salt[] = "123";
    strcpy(newpass, arr);
    strcat(newpass, salt);
//    printf("%s", newpass);
    puts(newpass);
}

