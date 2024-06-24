#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
    char c[20];
    char *ptr;
    int count = 0, a;
    printf("enter your name:- ");
    scanf("%s", c);
    a = strlen(c);
    ptr = c;
    printf("%d \n", a);
    
    for(int i=0;c[i] != '\0'; i++){
        count++;
 //       printf("hi");
    }
    
    printf("your name is %d characters long", count);
    return 0;
}