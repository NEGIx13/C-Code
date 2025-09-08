#include <math.h>
#include <stdio.h>

int main(){
    int n;
    printf("enter the marks of the student to check grade:- ");
    scanf("%d", &n);
    if(n>=0 && n<=100){
        if(n>=90){
            printf("the student gets a A grade");
        }
        else if(n>=80){
            printf("the student gets a B grade");
        }
        else if(n>=70){
            printf("the student gets a C grade");
        }
        else if(n>=60){
            printf("the student gets a D grade");
        }
        else{
            printf("the students gets a F grade");
        }
    }
    return 0;
}
