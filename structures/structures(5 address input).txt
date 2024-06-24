#include <string.h>
#include <math.h>
#include <stdio.h>

typedef struct address{
    int house;
    int block;
    char city[25];
    char state[25];
}ad;

int main(){
    int n, a;
    char b[25];
    char c[25];
    
    printf("enter the total number of entries:- ");
    scanf("%d", &n);
    
    ad people[n-1];
    
    for(int i=0;i<n;i++){
        printf("enter house no:- ");
        scanf("%d", &people[i].house);
        
        printf("enter block no:- ");
        scanf("%d", &a);
 //       strcpy(people[i].block, a);
        
        printf("enter city:- ");
        scanf("%s", b);
        strcpy(people[i].city, b);
        
        printf("enter state:- ");
        scanf("%s", c);
        strcpy(people[i].state, c);
    }
    
    for(int i=0;i<n;i++){
        printf("house no:- %d \n block no:- %c \n city:- %s \n state:- %s \n", people[i].house, people[i].block, people[i].city, people[i].state);
    }
    return 0;
}