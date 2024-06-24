#include <stdio.h>
#include <math.h>

int main(){
    int n;
    int ecount = 0; 
    int ocount = 0;
    int ncount = 0;
    int pcount = 0;
    printf("enter the size of the arrray :- ");
    scanf("%d", &n);
    int arr[n];
    
    for(int i=0;i<n;i++){
        printf("enter element %d :-", i+1);
        scanf("%d", &arr[i]);
    }
    
    for(int i=0;i<n;i++){
        if(arr[i]%2 == 0){
            ecount++;
        }
        else{
            ocount++;
        }
    }
    
    for(int i=0;i<n;i++){
        if(arr[i] > 0){
            pcount++;
        }
        else if(arr[i] < 0){
            ncount++;
        }
        else{
            continue;
        }
    }
    printf("total even numbers is the array :- %d \n", ecount);
    printf("total odd numbers is the array :- %d \n", ocount);
    printf("total negative numbers is the array :- %d \n", ncount);
    printf("total positive numbers is the array :- %d \n", pcount);
    return 0;
}