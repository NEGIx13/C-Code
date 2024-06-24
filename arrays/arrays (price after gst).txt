#include <stdio.h>
#include <math.h>


int main(){
    float arr[3];
    
    printf("enter price of chips:- ");
    scanf("%f", &arr[0]);
    printf("enter price of soap:- ");
    scanf("%f", &arr[1]);
    printf("enter price of gold- ");
    scanf("%f", &arr[2]);
    
    printf("prices after gst:- \n chips:- %5.2f \n soap :- %5.2f \n goal:- %5.2f \n", arr[0] + arr[0] * 0.18, arr[1] + arr[1] + 0.18, arr[2] + arr[2] * 0.18);
    return 0;
}