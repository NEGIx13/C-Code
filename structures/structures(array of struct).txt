#include <stdio.h>
#include <math.h>
#include <string.h>

struct student{
    int roll;
    char name[50];
    char mail[50];
    int phone;
    float percent;
};

int main(){
    int n, p, s;
    float t;
    char q[50];
    char r[50];
    printf("enter the total amount of enteries you wanna do:- ");
    scanf("%d", &n);
    struct student top[n-1];
    for(int i=0;i<n;i++){
 //       struct student i;
        printf("enter student roll:- ");
        scanf("%d", &p);
        
        printf("enter the name of the student:- ");
        scanf("%s", q);
        
        printf("enter student's mail id:- ");
        scanf("%s", r);
        
        printf("enter student phone:- ");
        scanf("%d", &s);
        
        printf("enter students percentage:- ");
        scanf("%f", &t);
        
        top[i].roll = p;
        strcpy(top[i].name, q);
        strcpy(top[i].mail, r);
        top[i].phone = s;
        top[i].percent = t;
        printf("\n");
    }
    
    printf("data of all students is as follows:- \n");
    
    for(int j=0;j<n;j++){
        printf("roll no:- %d \n name:- %s \n mail:- %s \n phone:- %d \n percent:- %4.1f \n", top[j].roll , top[j].name , top[j].mail , top[j].phone , top[j].percent);
    }
    return 0;
}