#include<stdio.h>

int liner_search(int arr[], int n, int x) {
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int x;
    scanf("%d", &x);

    int result = liner_search(arr, n, x);
    
    printf("%d\n", result);
    

    return 0;
}





// full implemention 



#include<stdio.h>

int linear_search(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n, x;
    printf("enter the value of n: ");
    scanf("%d", &n);
    printf("Enter array elements: ");
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("enter the element you want to find: ");
    scanf("%d", &x);

    int result = linear_search(arr, n, x);

    if (result != -1)  {
        printf("Element found at index: %d!\n", result);
    }
    else {
        printf("Element not found!\n");
    }

    return 0;
}




// another way without [input print message] 

#include<stdio.h>

int linear_search(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int x;
    scanf("%d", &x);

    int result = linear_search(arr, n, x);

    if (result != -1) {
        printf("element found at the index: %d\n", result);
    }
    else {
        printf("element not found!\n");
    }

    return 0;
}
