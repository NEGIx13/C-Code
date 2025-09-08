#include <stdio.h>
#include <math.h>

void printline(int n, char c);

int main(){
    int a;
    char b;
    printf("enter the character you want to display:- ");
    scanf("%c", &b);
    printf("enter the length of the line you want:- ");
    scanf("%d", &a);
    
    printf("this is how you line is going to look:- \n");
    printline(a,b);
    return 0;
}

void printline(int n, char c){
    for(int i=0;i<n;i++){
        printf("%c", c);
    }
}
