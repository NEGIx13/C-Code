#include <stdio.h>
#include <math.h>
#include <string.h>

typedef struct book{
    char name[50];
    int pages;
    float price;
}BCA;

int main(){
    int n;
    printf("enter the total entries in the account:- ");
    scanf("%d", &n);
    BCA s[n];
    
    for(int i=0;i<n;i++){
         printf("enter book name:- ");
         scanf("%s", s[i].name);
         
         printf("enter total pages:- ");
         scanf("%d", &s[i].pages);
         
         printf("enter price of book:- ");
         scanf("%f", &s[i].price);
    }
    
    printf("------------DETAILS OF ALL BOOKS PRESENT------------ \n");
    for(int j=0;j<n;j++){
        printf("NAME :- %s \n PAGES:- %d \n PRICE:- %6.2f \n", s[j].name, s[j].pages, s[j].price);
    }
    return 0;
}