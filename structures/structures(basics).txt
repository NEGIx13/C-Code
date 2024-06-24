#include <stdio.h>
#include <math.h>
#include <string.h>

struct student{
    int roll;
    float percent;
    char name[50];
};

int main(){
    struct student s1;
    s1.roll = 21;
    s1.percent = 91.4;
    strcpy(s1.name, "maulik");
//    s1.name = "maulik";

    printf("%d \n %5.1f \n %s", s1.roll, s1.percent, s1.name);
    return 0;
}
