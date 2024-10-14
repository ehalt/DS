#include<stdio.h>


void insertion_sort(int arr[], int n) {
    int item;
    for (int i = 1; i < n; i++) {
        item = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > item) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = item;
    }
}

void print(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}


int main() {

    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    insertion_sort(arr, n);
    print(arr, n);
    
    return 0;
}
