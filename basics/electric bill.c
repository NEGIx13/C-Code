#include <math.h>
#include <stdio.h>

int main(){
    char name[25];
    int unit;
    float sum = 0;
    printf("enter the name of the tenant for the bill:- ");
    scanf("%s", &name);
    printf("enter total units spent:- ");
    scanf("%d", &unit);
    if(unit < 200){
        sum += unit*0.5;  
    }
    else if(unit < 400){
        sum += 200*0.5;
        unit -= 200;
        sum += unit*0.65;
    }
    else if(unit < 600){
        sum += 200*0.5;
        sum += 200*0.65;
        unit -= 400;
        sum += unit*0.8;
    }
    else{
        sum += 200*0.5;
        sum += 200*0.65;
        sum += 200*0.8;
        unit -= 600;
        sum += unit*1;
    }
    
    printf("total electric bill is :- %f", sum);

//    printf("%s", name);
    return 0;
}