#include <stdio.h>
#include <math.h>
#include <string.h>

typedef struct bachalorscomputerscience{
    int roll;
    char name[50];
    float percent;
}bca;

int printinfo(bca s1);

int main(){
    char a[50];
    bca s1;
    
    printf("enter roll no:- ");
    scanf("%d", &s1.roll);
    
    printf("enter name:- ");
    scanf("%s", &a);
    strcpy(s1.name, a);
    
    printf("enter pecentage:- ");
    scanf("%f", &s1.percent);
    
    printf("roll:- %d \n name:- %s \n percent:- %4.1f \n", s1.roll, s1.name, s1.percent);
    
  //  printinfo(struct bca s1);
    return 0;
}

int printinfo( bca s1){
    printf("roll:- %d \n name:- %s \n percent:- %f \n", s1.roll, s1.name, s1.percent);
    return 0;
}