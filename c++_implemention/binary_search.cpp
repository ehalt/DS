#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define doura ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define sesh '\n';

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

int main()
{
    
    int n, x;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> x;

    int result = binary_search(arr, n, x);

    if (result != -1) {
        cout << "Element found at the index of : " << result << sesh;
    }
    else {
        cout << "Element not found!!\n";
    }

    return 0;
}
