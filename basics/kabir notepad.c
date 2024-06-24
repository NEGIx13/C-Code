    #include <stdio.h>
    #include <math.h>

    int printa(int arr[], int n);

    int main(){
        int n;
        printf("enter the size of the array:- ");
        scanf("%d", &n);
        int arr[n];
        
        for(int i=0;i<n;i++){
            printf("enter element no %d :- ", i+1);
            scanf("%d", &arr[i]);
        }
        
        printa(arr, n);
        return 0;
    }

    int printa(int arr[], int n){
        if(n==0){
            return 0;
        }
        else{
            printa(arr, n-1);
            printf(" %d ", arr[n-1]);
        }
        return 0;
    }