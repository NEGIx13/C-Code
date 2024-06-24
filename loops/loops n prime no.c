#include <stdio.h>
#include <math.h>

int prime(int n);

int main(){
    int n;
    int count = 0;
    int pcount = 0;
    int cnum = 2;
    printf("enter the number of prime numbers you want:- ");
    scanf("%d", &n);
    
    while(count != n){
        for(int i=1;i<cnum;i++){
            if(cnum%i == 0){
                pcount++;
            }
            else{
                continue;
            }
        }
        if(pcount == 1){
            printf(" %d ", cnum);
            count++;
        }
        pcount = 0;
        cnum++;
        
    }
    return 0;
}