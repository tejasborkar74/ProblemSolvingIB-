int Solution::solve(vector<vector<int> > &arr, int b)
{
    vector<vector<int> > dp (arr.size()+1 ,vector<int> (arr.size()+1 , 0));

    for(int i=1;i<dp.size();i++)
    {
        for(int j=1;j<dp[0].size();j++)
        {
            dp[i][j] = arr[i-1][j-1] + dp[i-1][j] + dp[i][j-1] -dp[i-1][j-1];
        }
    }

    int ans = INT_MIN;

    for(int i=b;i<dp.size();i++)
    {
        for(int j=b;j<dp[0].size();j++)
        {
            int curr = dp[i][j] - dp[i-b][j]-dp[i][j-b] + dp[i-b][j-b];

            ans = max(ans,curr);
        }
    }


    return ans;

}
