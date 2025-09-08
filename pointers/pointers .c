#include <stdio.h>
#include <math.h>

// int main(){
//     int a,b,c,negi,maulik;
//     int *n;
//     int **ni;
//     negi = 10;
//     *n = &negi;
//     int _negi;
//     _negi = *n;
//   //  **n = &*n;
//     printf("%d \n %p \n %d", negi, *n, _negi);
//     printf("%d", _negi);
    
//     return 0;
// }

int main(){
    int age, negi;
    age = 22;
    int *ptr = &age;
    negi = *ptr;
    
    printf("%d", negi);
    return 0;
}