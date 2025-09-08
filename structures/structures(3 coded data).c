#include <stdio.h>
#include <math.h>
#include <string.h>

struct student{
    int roll;
    char name[50];
//    char mail[50];
    float percent;
};

int main(){
    int a;
    char b[50] = "meghna";
    float c;
    struct student s1[3];
    
    a = 13;
    scanf("%s", &b);
//    fgets(b, 50, stdin);
    c = 50.5;
    
    s1[0].roll = a;
    s1[1].roll = 21;
    s1[2].roll = 24;
    
    strcpy(s1[0].name, b);
    strcpy(s1[1].name, "maulik");
    strcpy(s1[2].name, "prakhar");
    
    s1[0].percent = c;
    s1[1].percent = 90.4;
    s1[2].percent = 88.8;
    
    for(int i=0;i<3;i++){
        printf(" \n roll:- %d \n name:- %s \n percent:- %4.1f \n", s1[i].roll, s1[i].name, s1[i].percent);
    }
    
  
   
    
    printf(" \n roll:- %d \n name:- %s \n percent:- %4.1f \n", s1[0].roll, s1[0].name, s1[0].percent);
    printf(" \n roll:- %d \n name:- %s \n percent:- %4.1f \n", s1[1].roll, s1[1].name, s1[1].percent);
    printf("\n roll:- %d \n name:- %s \n percent:- %4.1f \n", s1[2].roll, s1[2].name, s1[2].percent);
    // printf("enter the roll of the first student:- ");
    // scanf("%d", )
    return 0;
}