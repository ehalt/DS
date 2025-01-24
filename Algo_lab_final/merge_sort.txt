MERGE-SORT(A, low, high)
    if low < high
        mid = (low + high) / 2      // Find the middle point
        MERGE-SORT(A, low, mid)     // Recursively sort the left half
        MERGE-SORT(A, mid + 1, high) // Recursively sort the right half
        MERGE(A, low, mid, high)    // Merge the two sorted halves

MERGE(A, low, mid, high)
    // Create temporary arrays for the left and right halves
    n1 = mid - low + 1
    n2 = high - mid
    L = new array of size n1
    R = new array of size n2

    // Copy data to temporary arrays L[] and R[]
    for i = 0 to n1 - 1
        L[i] = A[low + i]
    for j = 0 to n2 - 1
        R[j] = A[mid + 1 + j]

    // Merge the temporary arrays back into A[low..high]
    i = 0      // Initial index of the left subarray
    j = 0      // Initial index of the right subarray
    k = low    // Initial index of the merged subarray

    while i < n1 and j < n2
        if L[i] <= R[j]
            A[k] = L[i]
            i = i + 1
        else
            A[k] = R[j]
            j = j + 1
        k = k + 1

    // Copy the remaining elements of L[], if any
    while i < n1
        A[k] = L[i]
        i = i + 1
        k = k + 1

    // Copy the remaining elements of R[], if any
    while j < n2
        A[k] = R[j]
        j = j + 1
        k = k + 1
