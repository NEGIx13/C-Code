#include <stdio.h>
#include <math.h>


void printstring(char arr[]);


int main(){
    char name[] = "maulik";
    char surname[] = {'n', 'e', 'g', 'i', '\0'};
//    printf("%c \t %c", name, surname);
    printstring(name);
    printf("\n");
    printstring(surname);
    return 0;
}


void printstring(char arr[]){
    for(int i=0;arr[i] != '\0'; i++){
        printf("%c", arr[i]);
    }
}
