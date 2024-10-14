#include<bits/stdc++.h>
using namespace std;
#define doura ios::sync_with_stdio(0);cin.tie(0)
#define ll long long
#define sesh '\n';

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


int main() {

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    insertion_sort(arr, n);
    // print the sorted array
    for (auto e : arr) {
        cout << e << ' ';
    }
    
    return 0;
}
