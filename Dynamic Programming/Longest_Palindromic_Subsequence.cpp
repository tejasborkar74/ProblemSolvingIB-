string reverse (string a)
{
    for(int i=0,j=a.length()-1 ; i<j ; i++,j--)
    {
        swap(a[i],a[j]);
    }

    return a;
}

int LCS(string a,string b,int n,int m,  vector<vector<int> > &dp )
{

    for(int i=0;i<=m;i++)
    {
        dp[0][i]=0;
    }

    for(int i=0;i<=n;i++)
    {
        dp[i][0]=0;
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(a[i-1]==b[j-1])
            {
                dp[i][j] = 1 + dp[i-1][j-1];
            }
            else
            {
                dp[i][j] = max( dp[i-1][j] , dp[i][j-1] );
            }
        }
    }

    return dp[n][m];
}
int Solution::solve(string a)
{
    string b = reverse(a);

    vector<vector<int> > dp (a.length()+1, vector<int> (b.length()+1 , -1));

    return LCS(a,b,a.length(),b.length(),dp);
}
