#include <math.h>
#include <stdio.h>

int main(){
    int tab, i;
    i = 1;
    printf("enter a table for which you want the table off:- ");
    scanf("%d", &tab);
    
    do{
        printf("%d into %d is:- %d \n", i, tab, i*tab);
        i++;
    }
    while(i<=10);
    return 0;
}
