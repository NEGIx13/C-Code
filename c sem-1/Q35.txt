#include <stdio.h>
#include <math.h>

int callbyref(int *x);

int callbyval(int x);

int main(){
    int x = 10;
    printf("value w.call by value (before):- %d\n", x);
    callbyval(x);
    printf("value w.call by value (after):- %d\n", x);
    
    printf("value w.call by reference (before):- %d\n", x);
    callbyref(&x);
    printf("value w.call by reference (after):- %d\n", x);
  //  printf();
    return 0;
}

int callbyref(int *x){
    *x += 5; 
    printf("value w.call by value (during):- %d\n", *x);
    return 0;
}

int callbyval(int x){
    x += 5;
    printf("value w.call by value (during):- %d\n", x);
    return 0;
}
