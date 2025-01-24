0/1-KNAPSACK(n, W, wt[], val[]):
    // Input:
    //   n: Number of items
    //   W: Maximum weight capacity of the knapsack
    //   wt[]: Array of weights of items
    //   val[]: Array of values of items

    // Step 1: Create a DP table of size (n+1) x (W+1)
    dp = new array[n+1][W+1]

    // Step 2: Initialize the DP table
    for i = 0 to n:
        for w = 0 to W:
            if i == 0 or w == 0:
                dp[i][w] = 0  // Base case: No items or no capacity

    // Step 3: Fill the DP table
    for i = 1 to n:
        for w = 1 to W:
            if wt[i-1] <= w:  // If the current item can fit in the knapsack
                dp[i][w] = max(val[i-1] + dp[i-1][w - wt[i-1]], dp[i-1][w])
            else:
                dp[i][w] = dp[i-1][w]  // Cannot include the current item

    // Step 4: The answer is in dp[n][W]
    return dp[n][W]
