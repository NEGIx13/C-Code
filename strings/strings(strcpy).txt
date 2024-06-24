#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
    char old[100];
    char new[100];
    fgets(old, 100, stdin);
    fgets(new, 100, stdin);
    
    strcpy(old, new);
    puts(old);
    puts(new);
    return 0;
}