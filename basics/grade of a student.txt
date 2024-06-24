#include <stdio.h>
#include <math.h>

int main(){
    int marks;
    printf("enter marks obtained by the student:- ");
    scanf("%d", &marks);
    
    if(marks < 30){
        printf("C graded \n");
    }
    else if(marks >= 30 && marks < 70){
        printf("B graded \n");
    }
    else if(marks >= 70 && marks < 90){
        printf("A graded \n");
    }
    else if(marks >= 90 && marks <= 100){
        printf("A+ grade given \n");
    }
    else{
        printf("invalid marks: \n");
    }
    
    return 0;
}