#include <stdio.h>
#include <math.h>

int main(){
    int a,b,c;
    a = b = c = 15;
    int *ad = &a;
    int ab = *ad;
    printf("%d", ab);
    return 0;
}