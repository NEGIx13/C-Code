#include <stdio.h>
#include <math.h>

int main(){
    int n;
    float sum=0;
    printf("enter the number of terms you want the series of:- ");
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        sum+= 1.0/i;
    }
    
    printf("total sum of the series is:- \n %f", sum);
    return 0;
}
