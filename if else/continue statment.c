#include <stdio.h>
#include <math.h>

int main(){
    for(int i=1;i<=10;i++){
        if(i == 6){
            continue;
        }
        else{
            printf("%d \n", i);
        }
    }
    return 0;
}