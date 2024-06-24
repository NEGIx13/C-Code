#include <stdio.h>
#include <math.h>

int main(){
    int hr, min, day, sec;
    printf("enter the time to be converted (in hours):- ");
    scanf("%d", &hr);
    printf("1) hours converted into secs :- %d \n", hr*60*60);
    
    printf("enter the time to be converted (in hours):- ");
    scanf("%d", &hr);
    printf("2) hours converted into mins :- %d \n", hr*60);
    
    printf("enter the time to be converted (in mins):- ");
    scanf("%d", &min);
    printf("3) mins converted into secs :- %d \n", min*60);
    
    printf("enter the time to be converted (in days):- ");
    scanf("%d", &day);
    printf("4) days converted into secs :- %d \n", day*24*60*60);
    
    // min = hr * 60;
    // sec = min * 60;
    // day = hr/24;
    return 0;
}