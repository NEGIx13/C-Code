#include <stdio.h>
#include <math.h>
#include <string.h>

typedef struct employee{
    char name[50];
    int phone;
    float bal;
}stats;

int update(int n, stats s[n]);

int main(){
    int n;
    char poll;
    printf("enter the total entries in the account:- ");
    scanf("%d", &n);
    stats s[n];
    
    for(int i=0;i<n;i++){
         printf("enter employee name:- ");
         scanf("%s", s[i].name);
         
         printf("enter employee phone:- ");
         scanf("%d", &s[i].phone);
         
         printf("enter employee salery:- ");
         scanf("%f", &s[i].bal);
    }
    
    printf("------------DETAILS OF ALL EMPLOYEE PRESENT------------ \n");
    for(int j=0;j<n;j++){
        printf("NAME :- %s \n PHONE:- %d \n SALERY:- %f \n", s[j].name, s[j].phone, s[j].bal);
    }
    
    printf("do you want to update any value ? (Y/N) :- ");
    scanf("%c", &poll);
    
    while(poll != 'n' || poll != 'N'){
        update(n, stats s[n]);
        printf("values updated !! \n");
        printf("do you want to update any value ? (Y/N) :- ");
        scanf("%c", &poll);
    }
    return 0;
}

    int update(int n, stats s[n]){
        int a;
        printf("enter the index number you want to update :- ");
        scanf("%d", &a);
        printf("enter employee name:- ");
        scanf("%s", s[a].name);
         
        printf("enter employee phone:- ");
        scanf("%d", &s[a].phone);
         
        printf("enter employee salery:- ");
        scanf("%f", &s[a].bal);
        return 0;
    }
