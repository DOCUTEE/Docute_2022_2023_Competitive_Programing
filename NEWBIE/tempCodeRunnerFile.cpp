for (int i = 1; i <= n; i++) 
    if ( weight[i] > temp ) temp = weight[i];
    for (int j = 1; j <= temp; j++){
        for (int i = 1; i <= n; i++)
        {
            if (weight[i] < j) 
            {
                dp[i][j] = max(dp[i-1][j] ,value[i]+dp[i-1][j-weight[i]]);
            }
            else dp[i][j] = dp[i-1][j];
        }
    }