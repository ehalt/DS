#include<stdio.h>

int binary_search(int arr[], int n, int x) {
    int left, right, mid;

    left = 0; 
    right = n - 1;

    while(left <= right) {
        mid = (left + right) / 2;

        if (arr[mid] == x) {
            return mid;
        }

        if (arr[mid] < x) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return -1;
}


int main() {
    int n, x;

    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &x);

    int result = binary_search(arr, n, x);

    if (result != -1) {
        printf("Element found at the index of: %d", result);
    }
    else {
        printf("Element not found!!");
    }

    return 0;
}
