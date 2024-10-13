#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define doura ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define sesh '\n';


int linear_search(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;
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

    int result = linear_search(arr, n, x);

    if (result != -1) {
        cout << "Element found at the index: " << result << sesh;
    }
    else {
        cout << "Element not found\n";
    }

    return 0;
}
