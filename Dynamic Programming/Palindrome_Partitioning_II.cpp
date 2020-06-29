bool ispalindrom(string str,int i,int j)
{
    for(;i<j;i++,j--)
    {
        if(str[i]!=str[j])return false;
    }
    return true;
}

int dp[501][501];

int solve(string str,int i,int j)
{
    if(i>=j)return 0;

    if(ispalindrom(str,i,j))return 0;

    int ans=INT_MAX;

    if(dp[i][j]!=-1)return dp[i][j];

    for(int k=i;k<j;k++)
    {
        dp[i][k] = dp[i][k]!=-1 ? dp[i][k] : solve(str,i,k);
        dp[k+1][j]= dp[k+1][j]!=-1 ? dp[k+1][j] : solve(str,k+1,j);

        ans=min(ans , 1 + dp[k+1][j] + dp[i][k]);
    }

    return dp[i][j]=ans;
}
int Solution::minCut(string A)
{

    memset(dp,-1,sizeof(dp));
    return solve(A,0,A.length()-1);
}
