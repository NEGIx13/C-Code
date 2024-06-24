#include <stdio.h>
#include <math.h>

int main(){
    int marks;
    printf("enter the marks of the student:- ");
    scanf("%d", &marks);
    
    if(marks >= 0 && marks <= 30){
        printf("fail!!!!!");
    }
    else if(marks > 30 && marks <= 100){
        printf("pass with flying colours!!!");
    }
    else{
        printf("dont be naughty naughty :)");
    }
    return 0;
}