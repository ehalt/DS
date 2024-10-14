#include<bits/stdc++.h>
using namespace std;
#define doura ios::sync_with_stdio(0);cin.tie(0)
#define ll long long
#define sesh '\n';

void bubble_sort(int arr[], int n) {
    int temp;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}



int main() {

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bubble_sort(arr, n);
    // let's print the sorted array
    for (auto e : arr) {
        cout << e << ' ';
    }
    
    return 0;
}
