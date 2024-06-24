#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int *arr[n];

    for (int i = 0; i < n; i++) {
        arr[i] = (int *)malloc(sizeof(int));
    }

    for (int i = 0; i < n; i++) {
        printf("Enter value for element %d: ", i+1);
        scanf("%d", arr[i]);
    }

    printf("\nValues: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *arr[i]);
    }
    printf("\n");
