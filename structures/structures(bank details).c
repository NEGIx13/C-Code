#include <stdio.h>
#include <math.h>
#include <string.h>

typedef struct bank_acc{
    char name[50];
    int phone;
    float bal;
}hdfc;

int main(){
    int n;
    printf("enter the total entries in the account:- ");
    scanf("%d", &n);
    hdfc s[n];
    
    for(int i=0;i<n;i++){
         printf("enter accountant name:- ");
         scanf("%s", &s[i].name);
         
         printf("enter accountant phone:- ");
         scanf("%d", &s[i].phone);
         
         printf("enter accountant balance:- ");
         scanf("%f", &s[i].bal);
    }
    
    printf("------------DETAILS OF ALL ACCOUNTS PRESENT------------ \n");
    for(int j=0;j<n;j++){
        printf("NAME :- %s \n PHONE:- %d \n BALANCE:- %f \n", s[j].name, s[j].phone, s[j].bal);
    }
    return 0;