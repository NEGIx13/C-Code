#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <stdbool.h>

struct inventory{
    int id;
    char name[50];
    float price;
    int quantity;
};

int update(struct inventory *p1, int n);
int show(struct inventory *p1, int n);

int main(){
    int n, a, flag = 1;
    printf("enter the total number of entries:- ");
    scanf("%d", &n);
    struct inventory s1[n];
    for(int i=0;i<n;i++){
        printf("enter ID %d :- ", i+1);
        scanf("%d", &s1[i].id);
        printf("enter name %d :- ", i+1);
        scanf("%s", s1[i].name);
        printf("enter price %d :- ", i+1);
        scanf("%f", &s1[i].price);
        printf("enter quantity %d :- ", i+1);
        scanf("%d", &s1[i].quantity);
    }
    
    while(flag){
        printf("\n ===<<< STRUCTURE CREATED >>>=== \n");
        printf(" \n which funtion would you like to perform \n 1)show data in strcutre \n 2) inflate price by 10% \n 3) write the data in a file \n 4) exit \n");
        printf("your choice:- ");
        scanf("%d", &a);
        if(a ==1){
            show(&s1, n);
        }
        else if(a == 2){
            update(&s1, n);
        }
        else if(a == 3){
            FILE *ptr;
            ptr = fopen("data.txt", "w");
            if(ptr == NULL){
                printf("file not found \n");
                exit(1);
            }
            else{
                printf("file found !! \n");
            }
            fwrite(&s1 ,sizeof(struct), 1, ptr);
            fclose("data.txt");
            printf("\n DATA RECORDED \n");
        }
        else if(a == 4){
            printf(" THANK YOU (END)");
            exit(0);
        }
        else{
            printf("invalid option \n PLZ RETRY");
        }
    }
    return 0;
}

int show(struct inventory *p1, int n){
    for(int i=0;i<n;i++){
        printf("\n ENTITY NO %d \n", i+1);
        printf("ID :- %d \n", (p1+i)->id);
        printf("name :- %s \n", (p1+i)->name);
        printf("price :- %6.2f \n", (p1+i)->price);
        printf("quantity :- %d \n", (p1+i)->quantity);
    }
    return 0;
}

int update(struct inventory *p1, int n){
    for(int i=0;i<n;i++){
         float p = (p1+i)->price;
         p = p+(p/10);
        (p1+i)->price = p;
    }
    printf("\n PRICES UPDATED \n");
    return 0;
}
