// AP to read marks for 5 subject and put to them *sum and avg*
#include <stdio.h>

int main(){
    float maths,english,cs,physics,chemistry,sum,avg;
    printf("enter the marks in obtained in maths:- ");
    scanf("%f",&maths);
    printf("enter the marks in obtained in english:- ");
    scanf("%f",&english);
    printf("enter the marks in obtained in cs:- ");
    scanf("%f",&cs);
    printf("enter the marks in obtained in physics:- ");
    scanf("%f",&physics);
    printf("enter the marks in obtained in chemistry:- ");
    scanf("%f",&chemistry);
    
    sum = maths + english + cs + physics + chemistry;
    avg = sum/5;
    
    printf("total marks out of 500 by the student is %5.2f \n",sum);
    printf("average of the student is %5.2f",avg);
    
    
    return 0;
}