#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
    char a[30], b[30], c[30];
    int count =0;
    printf("enter a string to be checked :- ");
    fgets(a, 30, stdin);
//    scanf("%s", a);
    
    for(int i=0;a[i] != '\0'; i++){
        if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' || a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U'){
            printf("%c", a[i]);
            count++;
        }
    }
    printf("total vowels in the string:- %d", count);
    return 0;
}
