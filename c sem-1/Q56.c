#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student{
    int eno;
    char name[50];
    int marks[3];
};

int show(struct student *p1, int n);
int update(struct student *p1, int x);

int main(){
    FILE *ptr;
    int n, flag = 1, a,x;
    printf("enter the total number of entries:- ");
    scanf("%d", &n);
    struct student s1[n];
    
    for(int i=0;i<n;i++){
        printf("enter employee no:- ");
        scanf("%d", &s1[i].eno);
        printf("enter employee name:- ");
        scanf("%s", s1[i].name);
        printf("enter marks in math, english, science:- ");
        scanf("%d", &s1[i].marks[0]);
        scanf("%d", &s1[i].marks[1]);
        scanf("%d", &s1[i].marks[2]);
    }
    printf("\n <<<<-STRUCTURE CREATED->>>> \n");
    
    while(flag){
        while(flag){
            printf("enter which funtion to perform:- \n");
            printf("1) udpate marks of student \n 2) show all data \n 3) print in file \n 4) exit program\n ");
            printf("enter choice:- ");
            scanf("%d", &a);
            switch (a){
            case 1:
            printf("enter index no to be updated:-");
            scanf("%d", &x);
            update(&s1, x);
            break;
            case 2:
            show(&s1, n);
            break;
            case 3:
            ptr = fopen("data.txt","w");
            if(ptr==NULL){
                printf("cannot open file. \n");
                exit(1);
            }
            else{
                printf("The file test.txt created successfully...!! \n");
            }
            fwrite(&s1, sizeof(struct student), 1, ptr);
            fclose(ptr);
            printf("data recorded. \n \n");
            break;
            case 4:
            printf("END");
            exit(0);
            break;
            default:
            break;
            }
        }   
    }
    return 0; 
}

int show(struct student *p1, int n){
    for(int i = 0; i < n; i++) {
        printf("eno : %d\n", (p1+i)->eno);
        printf("name : %s\n", (p1+i)->name);
        printf("marks : %d %d %d \n", (p1+i)->marks[0], (p1+i)->marks[1],(p1+i)->marks[2]);
    }
    printf("\n");
    return 0;
}
int update(struct student *p1, int x){
    int Marks[3];
    printf("enter marks in math, english, science:- ");
        scanf("%d", &Marks[0]);
        scanf("%d", &Marks[1]);
        scanf("%d", &Marks[2]);
    
    for(int i=0;i<3;i++){
        (p1+x)->marks[i] = Marks[i];
    }
    printf("MARKS UPDATED. \n \n");
    return 0;
}