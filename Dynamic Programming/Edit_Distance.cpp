int dp[1001][1001];

int mini(int i,int j,int k)
{
    return min(i,min(j,k));
}
int answer(string a,string b,int n,int m)
{
    if(n==0)return m;

    if(m==0)return n;

    if(dp[n][m]!=-1)return dp[n][m];

    if(a[n-1]==b[m-1])
    {
        return dp[n][m] = answer(a,b,n-1,m-1) ;
    }
    else
    {
        return dp[n][m] = 1 + mini(answer(a,b,n-1,m),answer(a,b,n,m-1),answer(a,b,n-1,m-1));
    }
}
int Solution::minDistance(string A, string B)
{
    memset(dp,-1,sizeof(dp));

    return answer(A,B,A.length(),B.length());
}
