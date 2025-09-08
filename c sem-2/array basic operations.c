#include <stdio.h>

int ls(int a[]);

int main(){
    int n, x, count = 0;
    
    printf("enter the size of the array:- ");
    scanf("%d", &n);
    
    int a[n];
    for(int i=0;i<n;i++){
        printf("enter element in index %d :- ", i);
        scanf("%d", &a[i]);
    }
    
    printf("array which is formed :- \n");
    for(int i=0;i<n;i++){
        printf(" %d ", a[i]);
    }
    
    printf("\n array created!! \n");
    
    
    printf("enter the number you want to search:- ");
    scanf("%d", &x);
    for(int i=0;i<n;i++){
        
        if(a[i] == x){
            count++;
        }
        else{
            continue;
        }
    }
    if(count > 0){
        printf("element was found for a total of %d times \n", count);
    }
    else{
        printf("element not found \n");
    }
    

    printf("enter element you want to remove:- ");
    scanf("%d", &x);
    for(int i=0;i<n;i++){
        if(a[i] == x){
            for(int j=i;j<n-1;j++){
                a[j] = a[j+1];
            }
            break;
        }
    }
    
    printf("array after the element is removed:- \n");
    for(int i=0;i<n-1;i++){
        printf(" %d ", a[i]);
    }
    
    ls(a);
    return 0;
}

int ls(int a[]){
    
    return 0;
}