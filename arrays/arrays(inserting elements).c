#include <stdio.h>
#include <math.h>

int main(){
    int n, flag, choice;
    printf("enter the size of the array:- ");
    scanf("%d", &n);
    int arr[n];
    
    for(int i=0;i<n;i++){
        printf("enter the element to be added:- ");
        scanf("%d", &arr[i]);
    }
    
    flag = 1;
    while(flag = 1){
        printf("insert another element?\n1 for yes\n2 for no\n");
        scanf("%d", &choice);
        if (choice == 1){
            n++;
            arr[n];
            printf("enter the new element:- ");
            scanf("%d", &arr[n-1]);
        }
        else if(choice == 2){
            printf("thank you \n");
            break;
        }
        else{
            printf("invalid value entered \n");
        }
    }
    printf("final array is :- \n");
    for(int i=0;i<n;i++){
        printf("%d \t", arr[i]);
    }
    return 0;
}