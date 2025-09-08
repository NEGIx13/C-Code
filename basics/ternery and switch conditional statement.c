#include <stdio.h>
#include <math.h>

int main(){
    int d,age;
    printf("enter the age of the person:- ");
    scanf("%d", &age);
    
    age >= 18 ? printf("the person is an adult \n") : printf("not adult \n");
    
    printf("enter the number of the day (1-7) :- ");
    scanf("%d", &d);
    
    switch (d) {
        case 1: printf("its monday \n");
                break;
        case 2: printf("its tuesday \n");
                break;
        case 3: printf("its wednesday \n");
                break;
        case 4: printf("its thrusday \n");
                break;
        case 5: printf("its friday \n");
                break;
        case 6: printf("its saturday \n");
                break;
        case 7: printf("its sunday \n");
                break;
        default : printf("incorrect value \n");
                break;
    }    
        
    
    return 0;
}