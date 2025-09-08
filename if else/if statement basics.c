#include <stdio.h>

int main(){
    int age;
    
    printf("enter the age of the person:- ");
    scanf("%d", &age);
    
    if(age > 18){
        printf("the person is an adult !!!");
    }
    else if(age == 18){
        printf("the person will become a complete adult by next year.");
    }
    else{
        printf("the person is below 18 hence a child. :(");
    }
    
    return 0;
}