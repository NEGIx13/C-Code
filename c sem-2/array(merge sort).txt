#include <stdio.h>

void merge(int arr[], int l, int mid, int r);
void mergeSort(int arr[], int l, int r);

int main() {
    int n;
    printf("enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        printf("enter value no %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

void merge(int arr[], int l, int mid, int r) {
    int n1 = mid - l + 1;
    int n2 = r - mid;
    int a[n1];
    int b[n2];

    for (int i = 0; i < n1; i++) {
        a[i] = arr[l + i];
    }
    for (int j = 0; j < n2; j++) {
        b[j] = arr[mid + 1 + j];
    }

    int i = 0;
    int j = 0;
    int k = l;
    while (i < n1 && j < n2) {
        if (a[i] < b[j]) {
            arr[k] = a[i];
            k++;
            i++;
        } else {
            arr[k] = b[j];
            k++;
            j++;
        }
    }

    while (i < n1) {
        arr[k] = a[i];
        k++;
        i++;
    }

    while (j < n2) {
        arr[k] = b[j];
        k++;
        j++;
    }
}

void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int mid = l + (r - l) / 2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }
}
