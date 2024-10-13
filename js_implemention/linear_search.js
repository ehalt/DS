
function linear_search(arr, n, x) {
    for (let i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}


function main() {
    let n = 5;
    let arr = [1, 2, 3, 4, 5];
    let x = 3;

    const result = linear_search(arr, n, x);
    
    if (result != -1) {
        console.log(`Element found at the index: ${result}`);
    }
    else {
        console.log(`Element not found!!`);
    }
}

main();
