#include <stdio.h>
#include <string.h>

int main(){
    char fname[30];
    char lname[30];
    char copy[50];
    char fullname[50];
    int comp;
    int length;
    
    printf("enter first name :- ");
    fgets(fname, 30, stdin);
    printf("enter last name :- ");
    fgets(lname, 30, stdin);
    
//    fullname = strcat(fname, lname);
    strcpy(copy, fname);
    length = strlen(lname)-1;
    comp = strcmp(fname, lname);
    
    printf("full name:- %s \n", strcat(fname, lname));
    printf("copy of first name:- %s \n", copy);
    printf("length of last name:- %d \n", length);
//    printf("comparision of both :- %d \n", strcmp(fname, lname));
    printf("comparision of both :- %d \n", comp);
    
}