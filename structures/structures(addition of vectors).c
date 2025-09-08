#include <stdio.h>
#include <math.h>
#include <string.h>

typedef struct vectors{
    int x;
    int y;
}v;

int main(){
    int n, b, c;
    
    printf("enter the total number of entries:- ");
    scanf("%d", &n);
    v val[n-1];
    
    for(int i=0;i<n;i++){
        printf("enter value for 'x' vector:- ");
        scanf("%d", &val[i].x);
        
        printf("enter value for 'y' vector:- ");
        scanf("%d", &val[i].y);
    }
    
    printf("enter index's of vectors you want to add:- ");
    scanf("%d %d", &b, &c);
    
    printf("sum of the vectors is:- \n for x axis:- %d \n for y axis:- %d", val[b].x + val[c].x, val[b].y + val[c].y);
    
    return 0;
}