int mod=1000000007;

int dp[1001][1001];

int solver(int n,int sum)
{
    long ans=0;

    if(n==1 && sum>0 && sum<=9)return 1;

    if(n==0 || sum==0 )return 0;

    if(dp[n][sum] != -1)return dp[n][sum];

    for(int i=0;i<=9;i++)
    {
        if(sum-i>=0)
        {
           ans = (ans + solver(n-1,sum-i))%mod;
        }
    }

    return dp[n][sum] = (int)(ans%mod);
}

int Solution::solve(int n, int sum)
{

    memset(dp,-1,sizeof(dp));


    if(n==1 && sum==0)return 1;

    return solver(n,sum)%mod;
}
