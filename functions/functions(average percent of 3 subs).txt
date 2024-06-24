#include <stdio.h>
#include <math.h>

float percent(float n1, float n2, float n3);

int main(){
    float math, science, sanskrit;
    printf("enter the marks obtained in maths:- ");
    scanf("%f", &math);
    printf("enter the marks obtained in science:- ");
    scanf("%f", &science);
    printf("enter the marks obtained in sanskrit:- ");
    scanf("%f", &sanskrit);
    
    printf("total percentage of the student is:- %5.2f", percent(math, science, sanskrit));
    return 0;
}


float percent(float n1, float n2, float n3){
    float per = (n1 + n2 + n3)/ 3;
    return per;
}