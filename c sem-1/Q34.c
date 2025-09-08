#include <stdio.h>
#include <math.h>

int arm();

int main(){
    
    printf("--this is a programme to print all 3 digit armstrong numbers--\n");
    arm();
    return 0;
}

int arm(){
    int sum = 0,d,a;
    for(int i=100;i<1000;i++){
        a = i;
        for(int j=0;j<3;j++){
            d = i%10;
//            printf("%d \n", d);
            sum += d*d*d;
//            printf("%d \n", sum);
            i = i/10;
        }
        if(sum == a){
            printf("%d is a armstrong number \n", a);
            sum = 0;
            i = a;
        }
        else{
            printf("%d is not a armstrong number \n", a);
            sum = 0;
            i = a;
        }
    }
    return 0;
}