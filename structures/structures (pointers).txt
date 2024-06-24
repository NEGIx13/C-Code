#include <math.h>
#include <string.h>
#include <stdio.h>

struct student{
    int roll;
    char name[50];
    float percent;
};

int main() {
    char a[50];
    struct student s1;
    struct student *ptr = &s1;
    
    printf("enter roll:- ");
    scanf("%d", &s1.roll);
    printf("enter name:- ");
    scanf("%s", &a);
    strcpy(s1.name, a);
    
    printf("enter percentage:- ");
    scanf("%f", &s1.percent);
    
    
    printf("\n roll:- %d \n name:- %s \n percent:- %4.1f \n", (*ptr).roll, (*ptr).name, (*ptr).percent);
    printf(\n)
    return 0;
}