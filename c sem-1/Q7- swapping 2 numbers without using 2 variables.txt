#include <stdio.h>
#include <math.h>

int main(){
    int a,b,c;
    printf("enter 2 numbers to be swaped:-");
    scanf("%d \n %d", &a, &b);
    printf("a = %d \n b = %d \n", a, b);
    
    // c = a;
    // a = b;
    // b = c;
    
    a = a + b;
    b = a - b;
    a = a - b;
    printf("the swapped numbers are:- \n  a = %d \n b = %d", a , b);
    return 0;
}


// var1 = var1 + var2;
// var2 = var1 - var2;
// var1 = var1 - var2;