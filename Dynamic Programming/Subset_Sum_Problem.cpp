int Solution::solve(vector<int> &A, int B)
{
    int dp[A.size()+1][B+1];

    for(int i=0;i<=A.size();i++)dp[i][0] = 1;

    for(int i=1;i<=B;i++)dp[0][i]=0;

    for(int i=1;i<=A.size();i++)
    {
        for(int j=1;j<=B;j++)
        {
            if(A[i-1] <= j)
            {
                dp[i][j] = dp[i-1][j-A[i-1]] || dp[i-1][j];
            }
            else
            {
                dp[i][j] = dp[i-1][j];
            }
        }
    }

    return dp[A.size()][B];
}
