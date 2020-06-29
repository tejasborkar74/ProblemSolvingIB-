int Solution::uniquePathsWithObstacles(vector<vector<int> > &A)
{
    int r=A.size();
    int c=A[0].size();
    vector<vector<int> > dp(r, vector<int> (c));

    if(A[0][0]==1)return 0;

    dp[0][0]=1;
    for(int i=1;i<c;i++)
    {
        if(A[0][i]==1)
        {
            dp[0][i]=0;
        }
        else
        {
            dp[0][i]=dp[0][i-1];
        }
    }

    for(int j=1;j<r;j++)
    {
        if(A[j][0]==1)
        {
            dp[j][0]=0;
        }
        else
        {
            dp[j][0]=dp[j-1][0];
        }
    }

    for(int i=1;i<r;i++)
    {
        for(int j=1;j<c;j++)
        {
            if(A[i][j]==1)dp[i][j]=0;

            else
                dp[i][j]=dp[i-1][j] + dp[i][j-1];
        }
    }

    return dp[r-1][c-1];
}
