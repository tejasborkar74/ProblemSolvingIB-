
int answer(string a,string b,string c,int i,int j,int k, vector<vector<int> > &dp)
{
    if(k==c.length())return 1;

    //if(j==b.length() && i==a.length())return 0;

    if(dp[i][j]!=-1)return dp[i][j];

    // if(i<a.length() && j<b.length() && a[i]==b[j] && a[i]==c[k])
    // {
    //     int ans = answer(a,b,c,i+1,j,k+1,dp) + answer(a,b,c,i,j+1,k+1,dp);

    //     if(ans)return dp[i][j]=1;

    //     return dp[i][j]=0;
    // }

    // if(i<a.length() && a[i]==c[k])
    // {
    //     return dp[i][j]=answer(a,b,c,i+1,j,k+1,dp);
    // }

    // if(j<b.length() && b[j]==c[k])return dp[i][j]=answer(a,b,c,i,j+1,k+1,dp);

    // if(i<a.length() && j<b.length() && c[k]!=a[i] && b[j]!=c[k])
    // {
    //     int ans=answer(a,b,c,i+1,j,k,dp) + answer(a,b,c,i,j+1,k,dp);

    //     if(ans)return dp[i][j]=1;

    //     return dp[i][j]=0;
    // }
    int ans=0;
    if(i<a.length() && a[i]==c[k])
    {
        ans+=answer(a,b,c,i+1,j,k+1,dp);
    }

    if(j<b.length() && b[j]==c[k])
    {
        ans+=answer(a,b,c,i,j+1,k+1,dp);
    }

    dp[i][j] = ans > 0 ? 1 : 0;

    return dp[i][j];

}
int Solution::isInterleave(string a, string b, string c)
{
    if(c.length() > a.length() + b.length())return 0;

    vector<vector<int> >dp (a.length()+1,vector<int> (b.length()+1,-1));

    return answer(a,b,c,0,0,0,dp);
}
