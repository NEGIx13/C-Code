#include <stdio.h>
#include <math.h>


void hello(int a);


int main(){
    int n;
    printf("enter the number of time you want it to be done:- ");
    scanf("%d", &n);
    hello(n);
    
    return 0;
}


void hello(int a){
    if(a == 0){
        return;
    }
    else{
        printf("hello boys \n");
        hello(a-1);
    }
}