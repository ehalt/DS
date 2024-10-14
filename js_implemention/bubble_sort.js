function bubble_sort(arr, n) {
    let temp;
    for (let i = 0; i < n; i++) {
        for (let j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

function execution() {
    arr = [3, 8, 12, 78, 2, 4];
    n = 6;
    bubble_sort(arr, n);
    // print the sorted array 
    for (let e of arr) {
        console.log(e);
    }
}
execution();
