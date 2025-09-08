#include <stdio.h>
#include <math.h>

void indian();
void french();

int main(){
    char n;
    printf("enter the nationality of the person:-(capital initial) ");
    scanf("%c", &n);
    if(n == 'I'){
        indian();
    }
    else if(n == 'F'){
        french();
    }
    else{
        printf("wrong letter.");
    }
    return 0;
}


void indian(){
    printf("Namaste!!!");
}


void french(){
    printf("Bonjour");
}