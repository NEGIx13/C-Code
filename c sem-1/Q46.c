#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
    int a;
    char b[20];
    float c;
    int* ptr1;
    char* ptr2;
    float* ptr3;
    printf("enter your name:- ");
    scanf("%s", b);
    printf("enter integer value:- ");
    scanf("%d", &a);
    printf("enter float value:- ");
    scanf("%f", &c);
    
    ptr1 = &a;
    ptr2 = &b;
    ptr3 = &c;
    printf("value %d is a address:- %u \n", *ptr1, ptr1);
    printf("value %s is a address:- %u \n", *ptr2, ptr2);
    printf("value %f is a address:- %u \n", *ptr3, ptr3);
    return 0;
}
