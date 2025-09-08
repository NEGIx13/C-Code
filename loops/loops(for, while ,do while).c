#include <stdio.h>
#include <math.h>

int main(){
    for(int i=1;i<=5;i++){
        printf("hellu boys via for: \n");
    }
    int i = 1;
    
    for(char ch ='a';ch<='z';ch++){
        printf("%c \n", ch);
    }
    
    for(int j=1;j<=5;j++){
        printf("ohh boys:-%d \n", j);
    }
    
    while(i <= 5){
        printf("hellu guys via while \n");
        i++;
    }
    
    i = 1;
    
    
    do{
        printf("this hellu is done by DO while but!! \n");
        i++;
    }
    while(i <= 5);
    
    return 0;
}