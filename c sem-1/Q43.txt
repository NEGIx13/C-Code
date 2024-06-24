#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
    char a[50], b[50];
    int i;
    printf("enter the string to be copied:- ");
    scanf("%s", a);
    for(i=0;a[i] != '\0';i++){
        b[i] = a[i];
    }
    b[i] = '\0';
    printf("original str a = %s \n copied str b = %s", a, b);
    return 0;
}
