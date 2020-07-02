int answer(vector<vector<int> > arr,int i,int j,vector<vector<int> > &dp)
{
    for(j=0;j<arr[0].size();j++)
    {
        dp[arr.size()-1][j] = arr[arr.size()-1][j];
    }

    for(int i=arr.size()-2;i>=0;i--)
    {
        for(int j=0;j<=i;j++)
        {
            dp[i][j] = arr[i][j] + max(dp[i+1][j],dp[i+1][j+1]);
        }
    }

    return dp[0][0];

}
int Solution::solve(vector<vector<int> > &A)
{
    vector<vector<int> > dp (A.size(), vector<int> (A[0].size(),-1));
    return answer(A,0,0,dp);
}
