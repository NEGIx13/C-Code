#include <stdio.h>
#include <stdlib.h>

int main() {
    char data[100];
    FILE *fptr;

    fptr = fopen("days_of_the_week.txt", "w");
    if(fptr == NULL){
        printf("Error opening file!\n");
        exit(1);
    }

    printf("enter data to be recorded :-");
    gets(data);

    fprintf(fptr, "%s", data);
    fclose(fptr);

    fptr = fopen("days_of_the_week.txt", "r");
    if(fptr == NULL){
        printf("Error opening file!\n");
        exit(1);
    }
    
    fscanf(fptr, "%s", data);
    printf("Data from the file: \n %s \n", data);
    fclose(fptr);
    return 0;
}
