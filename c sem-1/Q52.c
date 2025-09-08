#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Person {
    char name[20];
    int age;
    float marks;
};

// function to update the members of the structure
int update(struct Person *ptr){
    char Uname[20];
    int Uage, index;
    float Umarks;
//    printf("enter the index you want to update:- ");
//    scanf("%d", &index);
    printf("enter name:- ");
    scanf("%s", Uname);
    
    printf("enter age:- ");
    scanf("%d", &Uage);
    
    printf("enter marks:- ");
    scanf("%f", &Umarks);
         
    strcpy(ptr->name, Uname);
    ptr->age = Uage;
    ptr->marks = Umarks;
    return 0;
}

int main() {
    int n, ans, flag = 1;
    printf("enter the total entries in the account:- ");
    scanf("%d", &n);

    struct Person person[n];
//    ptr = &person;
    for(int i=0;i<n;i++){
         printf("enter name:- ");
         scanf("%s", person[i].name);
         
         printf("enter age:- ");
         scanf("%d", &person[i].age);
         
         printf("enter marks:- ");
         scanf("%f", &person[i].marks);
         
    }
    printf("------------DETAILS OF ALL PEOPLE------------ \n");
    for(int j=0;j<n;j++){
        printf("NAME :- %s \n AGE:- %d \n MARKS:- %5.2f \n", person[j].name, person[j].age, person[j].marks);
    }
    while(flag == 1){
        printf("do you want to update a value ? (0/1):- ");
        scanf("%d", &ans);
        if(ans){
            update(&person);
        }
        else{
            flag = 0;
        }
    }
    printf("------------DETAILS AFTER UPDATE------------ \n");
    for(int j=0;j<n;j++){
        printf("NAME :- %s \n AGE:- %d \n MARKS:- %5.2f \n", person[j].name, person[j].age, person[j].marks);
    }
    printf("=== END ===");
    return 0;
}
