#include <stdio.h>
#include <math.h>

int main(){
    int start, end, sum = 0;
    printf("enter the starting of the range :- ");
    scanf("%d", &start);
    printf("enter the ending element of the range :- ");
    scanf("%d", &end);
    
    for(int i=start;i<=end;i++){
        sum += i;
    }
    printf("total sum of the range is:- %d", sum);
    return 0;
}