
int solve(vector<vector<int> > &mat,int m,int n)
{
   vector<vector<int> > dp(mat.size(), vector<int> (mat[0].size()));
    dp[0][0]=mat[0][0];
    for(int i=1;i<dp[0].size();i++)
    {
        dp[0][i]=mat[0][i] + dp[0][i-1];
    }

    for(int i=1;i<dp.size();i++)
    {
        dp[i][0]=mat[i][0] + dp[i-1][0];
    }

    for(int i=1;i<dp.size();i++)
    {
        for(int j=1;j<dp[0].size();j++)
        {
            dp[i][j]=mat[i][j] + min(dp[i][j-1],dp[i-1][j]);
        }
    }

   return dp[dp.size()-1][dp[0].size()-1];
}
int Solution::minPathSum(vector<vector<int> > &mat)
{
    int m=mat.size();
    int n=mat[0].size();



    return solve(mat,m,n);
}
