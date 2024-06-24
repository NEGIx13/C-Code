#include <stdio.h>
#include <math.h>

int main(){
    int m, *ptr1;
    float fx, *ptr2;
    char cht, *ptr3;
    
    printf("enter any integer value :- ");
    scanf("%d", &m);
    printf("enter any float value :- ");
    scanf("%f", &fx);
    printf("enter any character value :- z \n");
    cht = 'z';
    
    ptr1 = &m;
    ptr2 = &fx;
    ptr3 = &cht;
    
    printf("Pointer : Demonstrate the use of & and * operator : \n");
    printf("---------------------------------------------------- \n");
    printf("m = %d \n", m);
    printf("fx = %f \n", fx);
    printf("cht = %c \n \n", cht);
    
    printf(" Using & operator : \n");
    printf("---------------------------------------------------- \n");
    printf("address of m = %p \n", &m);
    printf("address of fx = %p \n", &fx);
    printf("address of cht = %p \n \n", &cht);
    
    printf(" Using & and * operator : \n");
    printf("---------------------------------------------------- \n");
    printf("value at address m = %d \n", *(&m));
    printf("value at address fx = %f \n", *(&fx));
    printf("value at address cht = %c \n \n", *(&cht));
    
    printf(" Using only pointer variable : \n");
    printf("---------------------------------------------------- \n");
    printf("address of m = %p \n", ptr1);
    printf("address of fx = %p \n", ptr2);
    printf("address of cht = %p \n \n", ptr3);
    
    printf(" Using only pointer operator : \n");
    printf("---------------------------------------------------- \n");
    printf("value at address m = %d \n", *ptr1);
    printf("value at address fx = %f \n", *ptr2);
    printf("value at address cht = %c \n \n", *ptr3);
    
    return 0;
}