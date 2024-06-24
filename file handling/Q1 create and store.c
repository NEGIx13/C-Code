#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    FILE *ptr;
    char a[100];
    ptr = fopen("q1.txt", "w+");   // r w wb rb r+ w+ a a+

    if(ptr==NULL){
        printf("cannot open file. \n");
        exit(1);
    }
    else{
        printf("The file test.txt created successfully...!! \n");
    }
    
    printf("enter content you want to write");
    fgets(a,50,stdin);
    fprintf(ptr,"%s",a);
    fclose(ptr);
    prinf("data recorded.");
    return 0;
}

// #include <stdio.h>
// #include <stdlib.h>
  
// int main()
// {
//    char str[1000];
//    FILE *fptr;
//    char fname[20]="test.txt";

//     printf("\n\n Create a file (test.txt) and input text :\n");
// 	printf("----------------------------------------------\n"); 
//    fptr=fopen(fname,"w");	
//    if(fptr==NULL)
//    {
//       printf(" Error in opening file!");
//       exit(1);
//    }
//    printf(" Input a sentence for the file : ");
//    fgets(str, sizeof str, stdin);
//    fprintf(fptr,"%s",str);
//    fclose(fptr);
//    printf("\n The file %s created successfully...!!\n\n",fname);
//    return 0;
// }