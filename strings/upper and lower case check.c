#include <stdio.h>
#include <math.h>

int main(){
    char ch;
    printf("enter any character to be checked:- ");
    scanf("%c", &ch);
    
    if(ch >= 'a' && ch <= 'z'){
        printf("the given character is in the lower case. \n");
    }
    else if(ch >= 'A' && ch <= 'z'){
        printf("the given character is in the upper case \n");
    }
    else{
        printf("you entered an invalid range. retry \n");
    }
    
    return 0;
}