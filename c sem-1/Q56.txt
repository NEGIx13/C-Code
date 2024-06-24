#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    enum day{
        monday, tuesday, wednesday, 
        thrusday, friday, saturday,
        sunday
    };
    enum day name;
    name = thrusday;
    printf("%d", name);
    return 0;
}
