def Count(N, L, R):
     
    # Stores all DP-states
    dp = [[0 for i in range(R - L + 1)]
             for i in range(N)]
              
    # Stores the result
    ans = 0
 
    # Traverse the range [0, N]
    for i in range(N):
        dp[i][0] = 1
 
    # Traverse the range [1, R - L]
    for i in range(1, len(dp[0])):
        
        # Update dp[i][j]
        dp[0][i] = dp[0][i - 1] + 1
 
    # Assign dp[0][R-L] to ans
    ans = dp[0][R - L]
 
    # Traverse the range [1, N]
    for i in range(1, N):
         
        # Traverse the range [1, R - L]
        for j in range(1, len(dp[0])):
             
            # Update dp[i][j]
            dp[i][j] = dp[i - 1][j] + dp[i][j - 1]
 
        # Increment ans by dp[i-1][j]
        ans += dp[i][R - L]
 
    # Return ans
    return ans
 
# Driver Code
if __name__ == '__main__':
     
    # Input
    N = 2
    L = 8
    R = 9
 
    # Function call
    print(Count(N, L, R))
     
# This code is contributed by mohit kumar 29