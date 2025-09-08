#include <stdio.h>
#include <math.h>
#include <string.h>

typedef struct complex{
    int real;
    int img;
}comp;

int main(){
    int n;
    printf("enter the total number of complex no. entries:- ");
    scanf("%d", &n);
    comp s[n];
    
    for(int i=0;i<n;i++){
        printf("enter real part of the number:- ");
        scanf("%d", &s[i].real);
        
        printf("enter imaginary part of the number:- ");
        scanf("%d", &s[i].img);
    }
    
    for(int j=0;j<n;j++){
        printf("complex no %d is :- %d i%d \n", j+1, s[j].real, s[j].img);
    }
    return 0;
}