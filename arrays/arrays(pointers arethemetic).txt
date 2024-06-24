#include <stdio.h>
#include <math.h>

int main(){
    int age = 22;
    int *aage = &age;
    printf(" address of age :- %u \n", aage);
    *aage++;
    printf(" address of age +1 :- %u \n", aage);
    *aage--;
    printf(" address of age (original) :- %u \n", aage);
    return 0;
}