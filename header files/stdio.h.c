#include <stdio.h>

int main(){
    char full_date[100] = "3 march 2023 friday";
    char day[15];
    char month[15];
    char sen[50];
    int year;
    int date;
    int age = 19;
    
    sprintf(sen, "hello my age is %d", age);
    sscanf(full_date, "%d %s %d %s", &date, month, &year, day);
    
    puts(sen);
    printf("\n %d %s %d = %s", date, month, year, day);
    
//    int *fptr = fopen("maulik.txt", "r");
//    fclose(fptr);
    
    
    return 0;
}