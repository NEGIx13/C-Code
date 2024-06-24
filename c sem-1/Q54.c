#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int roll_no;
    char name[20];
    float marks;
} student;

int main() {
    FILE *fptr;
//    student sem1;
    fptr = fopen("student1.txt", "r+");
    if(fptr == NULL){
        printf("Error opening file!\n");
        exit(1);
    }

    printf("Enter roll number: ");
    scanf("%d", &student.roll_no);
    printf("Enter name: ");
    scanf("%s", student.name);
    printf("Enter marks: ");
    scanf("%f", &student.marks);

    fwrite(&student, sizeof(struct Student), 1, fptr);
    fclose(fptr);

    fptr = fopen("student1.txt", "r");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    fread(&student, sizeof(struct Student), 1, fptr);
    printf("Roll number: %d\n", student.roll_no);
    printf("Name: %s\n", student.name);
    printf("Marks: %.2f\n", student.marks);

    fclose(fptr);
    return 0;
}
