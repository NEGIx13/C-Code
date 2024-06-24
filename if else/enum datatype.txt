#include <stdio.h>
#include <math.h>

int main(){
    enum week{mon=10,tue, wed, thr, fri, sat, sun};
    int a,b,c;
    a = mon;
    b = tue;
    c = thr;
    printf("%d \n %d \n %d \n", a ,b ,c);
    return 0;
}