#include <stdio.h>
#include <math.h>

int main(){
    int age = 21;
    int *aged = &age;
    
    printf("%u \n %u \n %u", &age, aged, &aged);
}