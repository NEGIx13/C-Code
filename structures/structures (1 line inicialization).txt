#include <stdio.h>
#include <math.h>
#include <string.h>

struct collage{
    int roll;
    char name[50];
    char in_time[10];
};


int main(){
 //   struct collage bca[3];

    struct collage bca = {21, "maulik", "9:40"};
    
    printf("%d %s %s", bca.roll, bca.name, bca.in_time);
    return 0;
}