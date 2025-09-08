#include <stdio.h>
#include <math.h>
#include <string.h>

int count(char arr[]);

int main(){
    char str[100];
    printf("enter the string to be checked for frequency:- ");
    fgets(str, 100, stdin);
    count(str);
    return 0;
}


int count(char arr[]){
    int count, max_count;
    char max_ch;
    count = 0;
    max_count = 0;
    for(int i=0;arr[i]!='\0';i++){
        char f = arr[i];
        count = 0;
        for(int j=0;arr[j]!='\0';j++){
            if(arr[i] == arr[j]){
                count++;
            }
            else{
                continue;
            }
            if(max_count < count){
                max_count = count;
                max_ch = arr[i];
            }
        }
    }
    printf("the character with maximum frequency is << %c >> with a total %d appearences.", max_ch, max_count);
    return 0;
}
