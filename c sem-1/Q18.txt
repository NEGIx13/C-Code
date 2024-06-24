#include <stdio.h>
#include <math.h>

int main(){
    int n,m,count;
    printf("enter a number for you want the counting in ascending order:- ");
    scanf("%d", &n);
    count = 1;
    while(n>=count){
        printf("%d \n", count);
        count++;
    }
    
    printf("enter a number for you want the counting in descending order:- ");
    scanf("%d", &m);
    
    while(m>0){
        printf("%d \n", m);
        m--;
    }
    return 0;
}