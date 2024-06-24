#include <stdio.h>
#include <math.h>

int main(){
    int m=10, o, n, *z;
    z = &m;

    printf(" Pointer : Show the basic declaration of pointer :  \n");
    printf("------------------------------------------------------- \n");
    printf("Here is m = %d, n and o are two integer variable and *z is an integer \n \n", m);
    printf("z stores the address of m  = %p \n", z);
    printf("*z stores the value of m = %d \n", *z);
    printf("&m is the address of m = %p \n", &m);
    printf("&n stores the address of n = %p \n", &n);
    printf("&o stores the address of o = %p \n", &o);
    printf("&z stores the address of z = %p \n", &z);
    return 0;
}
