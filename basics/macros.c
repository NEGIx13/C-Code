#include <stdio.h>

#define ELE 1, 2, 3
#define sum(c,b) c+d
#define min(a, b) (((a) < (b)) ? (a) : (b))

int main(){
    int arr[] = {ELE};
//    int sum = SUM(10,20);
    int a = 15, b = 10, c = 10, d = 30;
 //   printf("%d", ELE);
    
    for(int i=0;i<3;i++){
        printf(" %d ", arr[i]);
    }
    
    printf("\n sum of 10 and 20 is :- %d \n", sum(a,b));
    printf("\n min value b/w 10 and 20 is :- %d ", min(a,b));
    return 0;
}