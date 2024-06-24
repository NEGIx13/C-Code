#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
    int i1;                 // %d 
    short int i2;           // %d
    long int i3;            // %ld
    unsigned int i4;        // %u
    unsigned short int i5;  // %u
    unsigned long int i6;   // %lu
    float f1;               // %f
    double f2;              // %lf
    long double f3;         // %Lf
    char c1;                // %c
    unsigned char c2;       // %c
    printf("all good");
    
    scanf("%d", &i1);
    scanf("%d", &i2);
    scanf("%ld", &i3);
    scanf("%u", &i4);
    scanf("%u", &i5);
    scanf("%lu", &i6);
    scanf("%f", &f1);
    scanf("%lf", &f2);
    scanf("%Lf", &f3);
    scanf("%c", &c1);
    scanf("%c", &c2);
    
    printf("%d \n", &i1);
    printf("%d \n", &i2);
    printf("%ld \n", &i3);
    printf("%u \n", &i4);
    printf("%u \n", &i5);
    printf("%lu \n", &i6);
    printf("%f \n", &f1);
    printf("%lf \n", &f2);
    printf("%Lf \n", &f3);
    printf("%c \n", &c1);
    printf("%c \n", &c2);
    
    
    return 0;
}



// types of datatypes (3 types)
// primary data type(language defined)
// user defined data types (made by the user)
// derived data types (converting or creating new variables while using the current exisiting ones)



// MSB = Most significant bit 
// + is denoted by (0)
// - is denoted by (1)


// in float values (bit system)
// float are divied into 2 parts
// 1) MANTISSA 
// 2) EXPONENT 
