int Solution::isMatch(const string a, const string b)
{
    bool dp[a.length()+1][b.length()+1];

    memset(dp,false,sizeof(dp));

    dp[0][0]=true;

    for(int i=1;i<=b.length();i++)
    {
        if(b[i-1]=='*')
        {
            dp[0][i]=dp[0][i-2];
        }
    }

    for(int i=1;i<=a.length();i++)
    {
        for(int j=1;j<=b.length();j++)
        {
            if(a[i-1]==b[j-1] || b[j-1]=='.')
            {
                dp[i][j] = dp[i-1][j-1];
            }
            else if(b[j-1]=='*')
            {
                dp[i][j] = dp[i][j-2];

                if(a[i-1]==b[j-2] || b[j-2]=='.')
                {
                    dp[i][j] = dp[i][j] || dp[i-1][j];
                }
            }
            else
            {
                dp[i][j]=false;
            }
        }
    }

    return dp[a.length()][b.length()];


}
