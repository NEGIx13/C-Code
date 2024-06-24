    #include <stdio.h>
#include <string.h>

union book{
    char name[10];
    int pages;
    float price;
};

struct human{
    unsigned int hours:5;
    unsigned int mins:6;
    unsigned int secs:6;
};

int main(){
    union book harry;
    struct human maulik;
    int a,b,c;
    
    harry.pages = 999;
    harry.price = 699.5;
    
    printf("enter current time in HH:MM:SS format = ");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    maulik.hours = a;
    maulik.mins = b;
    maulik.secs = c;
    
//    printf("book price :- %f \n", harry.price);
    printf("what member do you want to input \n");
    printf("1) name \n 2) pages \n 3) price");
    scanf("%d", &a);
    
    if(a==1){
        printf("enter name:- ");
        scanf("%s", harry.name);
        printf("\n name = %s \n", harry.name);
    }
    else if(a==2){
        printf("enter pages:- ");
        scanf("%d", &harry.pages);
        printf("\n pages:- %d \n", harry.pages);
    }
    else if(a==3){
        printf("enter price:- ");
        scanf("%f", &harry.price);
        printf("\n price:- %6.2f \n", harry.price);
    }
    else{
        printf("wrong input.");
    }
    printf("current time :- %d:%d:%d \n", maulik.hours, maulik.mins, maulik.secs);
    printf("live time:- %d %c", maulik.secs, m);
    printf("log.time t under %d", __has_attribute);
    return 0;
}