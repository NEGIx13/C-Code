#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct marks{
    int math;
    int eng;
    int hin;
    int cs;
    int chem;
};

struct student{
    char name[30];
    int roll;
    struct marks sub;
    int avg;
    char result[10];
    struct student* next;
};

void display(struct student** start);
void insert(struct student** start);

int main(){
    struct student* start = NULL;
    insert(&start);
    insert(&start);
    display(&start);
    return 0;
}

void display(struct student** start){
    struct student* temp = *start;
    while(temp != NULL){
        printf("name:- %s \n", temp->name);
        printf("roll:- %d \n", temp->roll);
        printf("marks= \n");
        
        printf("math--> %d \n", temp->sub.math);
        printf("eng --> %d \n", temp->sub.eng);
        printf("hin --> %d \n", temp->sub.hin);
        printf("cs  --> %d \n", temp->sub.cs);
        printf("chem--> %d \n", temp->sub.chem);
        
        printf("avg:- %d \n", temp->avg);
        printf("result:- %s \n", temp->result);
        temp = temp->next;
        printf("\n");
    }
}

void insert(struct student** start){
    struct student* n = (struct student*)malloc(sizeof(struct student));
    printf("enter name:- ");
    gets(n->name);
    printf("\n roll:- ");
    scanf("%d ", &n->roll);
    printf("marks= \n");
        
    printf("\n math   marks = ");
    scanf("%d ", &n->sub.math);
    printf("\n eng    marks =");
    scanf("%d ", &n->sub.eng);
    printf("\n hin    marks =");
    scanf("%d ", &n->sub.hin);
    printf("\n cs     marks =");
    scanf("%d ", &n->sub.cs);
    printf("\n chem   marks ="); 
    scanf("%d ", &n->sub.chem);
        
    n->avg = (n->sub.math + n->sub.eng + n->sub.hin + n->sub.cs + n->sub.chem)/5;
//    if(n->avg > 40){
//        char res[] = "PASS";
//        n->result = "PASS";
//    }
//    else{
//        char res[] = "FAIL";
//        n->result = res;
//    } 
    n->next = NULL;
    struct student* temp = *start;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
    return;
}