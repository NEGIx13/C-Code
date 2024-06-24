#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main(){
    FILE *ptr;
    char str;
    
    ptr = fopen("sample1.txt", "r");

    if(ptr==NULL){
        printf("cannot open file.");
        exit(1);
    }
    else{
        printf("file opened successfully. \n");
    }

    prinf("The content of the file test.txt is  : \n");
    while (str != EOF){
        printf("%c", str);
        str = fgetc(ptr);
    }

    fclose(ptr);
    return 0;
}


// str = fgetc(fptr);
// 	while (str != EOF)
// 		{
// 			printf ("%c", str);
// 			str = fgetc(fptr);
// 		}
// 	fclose(fptr);
//     printf("\n\n");
// }