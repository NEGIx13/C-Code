#include <string.h>
#include <math.h>
#include <stdio.h>

struct school{
    int roll;
    char name[50];
    float percent;
};

int printinfo(struct school a1);

int main(){
    struct school s1;
    char a[50];
    printf("enter roll no:- ");
    scanf("%d", &s1.roll);
    
    printf("enter name:- ");
    scanf("%s", &a);
    strcpy(s1.name, a);
    
    printf("enter pecentage:- ");
    scanf("%f", &s1.percent);
    
    printinfo(s1);
    return 0;
}


int printinfo(struct school a1){
    printf("roll:- %d \n name:- %s \n percent:- %4.1f \n", a1.roll, a1.name, a1.percent);
    return 0;
}

///

#include <string.h>
#include <math.h>
#include <stdio.h>

struct school{
    int roll;
    char name[50];
    float percent;
};

int printinfo(struct school a1);

int main(){
    struct school s1;
    char a[50];
    printf("enter roll no:- ");
    scanf("%d", &s1.roll);
    
    printf("enter name:- ");
    scanf("%s", &a);
    strcpy(s1.name, a);
    
    printf("enter pecentage:- ");
    scanf("%f", &s1.percent);
    
    printinfo(s1);
    return 0;
}


int printinfo(struct school a1){
    printf("roll:- %d \n name:- %s \n percent:- %4.1f \n", a1.roll, a1.name, a1.percent);
    return 0;
}