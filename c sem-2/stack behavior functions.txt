// RESURSIVE FUNTION CRITERIA 
//
// 1) DEFINE THE FUNCTIONS IN TERMS OF ITSELF
// 2) MUST HAVE A WELL DEFINED TERMINATING FUNCTION 
// 3) EVERY FUNCTION CALL MUST BRING US CLOSER TO THE BASE CONDITION

#include <stdio.h>
#include <math.h>

int pop(int arr[], int* top);
int push(int arr[], int* top);
int peek(int arr[], int* top);
int display(int arr[], int* top);

int main(){
    int n, c;
    int flag = 1;
    int top = -1;
    printf("enter the size of the stack:- ");
    scanf("%d", &n);
    int arr[n];
    while(flag == 1){
        printf("enter which function would you like to perform:- \n");
        printf("1)push a element \n2) pop a element \n3) peek at a elment \n4) check for empty \n5) check for full \n6) display values \n7) exit program \n your choice:- ");
        scanf("%d", &c);
        switch(c){
        case 1:
            top++;
            if(top < n){
                push(arr, &top);
            }
            else{
                printf("stack overflow \n");
                top--;
            }
            break;
        case 2:
            if(top > -1){
                pop(arr, &top);
            }
            else{
                printf("stack underflow \n");   
            }
            break;
        case 3:
            peek(arr, &top);
            break;
        case 4:
            if(top == -1){
                printf("stack is empty \n");
            }
            else{
                printf("not empty and has %d values\n", top+1);
            }
            break;
        case 5:
            if(top == n-1){
                printf("stack is full \n");
            }
            else{
                printf("not full and has %d values\n", top+1);
            }
            break;
        case 6:
            display(arr, &top);
            break;
        case 7:
            printf("thank you for using the program. ");
            printf("\n <<<< END >>>>");
            flag = 0;
            break;
        default:
            break;
        }
    }
    return 0;
}

int pop(int arr[], int* top){
    printf("value poped is :- %d \n", arr[*top]);
    *top-= 1;
    return 0;
}
int push(int arr[], int* top){
//    int a;
    printf("enter a value to be pushed :- ");
//    *top += 1;
    scanf("%d", &arr[*top]);
    printf("value pushed \n");
    return 0;
}
int peek(int arr[], int* top){
    printf("value at the top of the stack is:- %d \n", arr[*top]);
    return 0;
}
int display(int arr[], int* top){
    return 0;
}