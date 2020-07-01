//DP

int solve(vector<vector<int> > &arr,int n,int *dp)
{
    // if(n<=0)return 0;

    // if(dp[n]!=-1)return dp[n];

    // // dp[n-2] = dp[n-2]!=-1 ? dp[n-2] : solve(arr,n-2,dp);
    // // dp[n-1] = dp[n-1]!=-1 ? dp[n-1] : solve(arr,n-1,dp);

    // return dp[n] = max( max(arr[0][n-1],arr[1][n-1]) + solve(arr,n-2,dp) , solve(arr,n-1,dp) );

    dp[0]=0;

    dp[1]=max(arr[0][0],arr[1][0]);

    for(int i=2;i<=n;i++)
    {
        dp[i]=max( max(arr[0][i-1],arr[1][i-1]) + dp[i-2] , dp[i-1]);
    }

    return dp[n];
}
int Solution::adjacent(vector<vector<int> > &arr)
{
    int dp[arr[0].size()+1];
    memset(dp,-1,sizeof(dp));
    return solve(arr,arr[0].size(),dp);
}


//Memo
int solve(vector<vector<int> > &arr,int n,int *dp)
{
    if(n<=0)return 0;

    if(dp[n]!=-1)return dp[n];

    // dp[n-2] = dp[n-2]!=-1 ? dp[n-2] : solve(arr,n-2,dp);
    // dp[n-1] = dp[n-1]!=-1 ? dp[n-1] : solve(arr,n-1,dp);

    return dp[n] = max( max(arr[0][n-1],arr[1][n-1]) + solve(arr,n-2,dp) , solve(arr,n-1,dp) );
}
int Solution::adjacent(vector<vector<int> > &arr)
{
    int dp[arr[0].size()+1];
    memset(dp,-1,sizeof(dp));
    return solve(arr,arr[0].size(),dp);
}
