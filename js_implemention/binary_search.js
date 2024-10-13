
function binary_search(arr, n, x) {
    let left, right, mid;

    left = 0;
    right = n - 1; // last index

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

function implement() {
    let result = binary_search([1, 2, 3, 4, 5], 5, 3);
    console.log((result != -1) ? `Element found at the index of: ${result}` : `Element not found!!`);
}

implement();
