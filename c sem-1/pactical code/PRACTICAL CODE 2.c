#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct product{
    int PID;
    char name[50];
    float price;
};
int show(struct product *p1, int n);
int update(struct product *p1);

int main(){
    int n, flag = 1, a;
    printf("enter total number of entries:- ");
    scanf("%d", &n);
    struct product s1[n];
    
    for(int i=0;i<n;i++){
        printf("enter product ID %d :- ", i+1);
        scanf("%d", &s1[i].PID);
        printf("enter product name %d :- ", i+1);
        scanf("%s", s1[i].name);
        printf("enter price %d :- ", i+1);
        scanf("%f", &s1[i].price);
    }
    printf("\n ===<<< STRUCTURE CREATED>>>=== \n");
    
    while(flag){
        printf("which function would you like to perform \n 1) show current data in structure \n 2) update price of product \n 3) write the data in file \n 4) exit the program \n");
        printf("\n your choice :- ");
        scanf("%d", &a);
        if(a == 1){
            show(&s1, n);
        }
        else if(a ==2){
            update(&s1);
        }
        else if(a ==3){
            FILE *ptr;
            ptr = fopen("data.txt","w");
            if(ptr == NULL){
                printf("file not found \n");
                exit(1);
            }
            else{
                printf("file named data.txt found \n");
            }
            fwrite(&s1, sizeof(struct product),1,ptr);
            fclose("data.txt");
            printf("data recorded \n");
        }
        else if(a ==4){
            printf("thank you!! \n ===>END<===");
            exit(0);
        }
        else{
            printf("invalid choice \n retry \n");
        }
    }
    return 0;
}

int show(struct product *p1, int n){
    for(int i=0;i<n;i++){
        printf(" PID :- %d \n", (p1+i)->PID);
        printf(" name :- %s \n", (p1+i)->name);
        printf(" price :- %6.2f \n", (p1+i)->price);
    }
    printf("\n");
    return 0;
}
int update(struct product *p1){
    int x;
    printf("enter the index to be updated:- ");
    scanf("%d", &x);
    printf("enter the new price:- ");
    scanf("%f", &(p1+x)->price);
    printf("price updated. \n");
    return 0;
}