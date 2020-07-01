int answer(string a , int i , string b,int j,vector<vector<int> > &dp)
{
     if(j==b.length())return 1;

    if(i==a.length())return 0;

    if(dp[i][j]!=-1)return dp[i][j];

    if(a[i]==b[j])
    {
        return dp[i][j] = answer(a,i+1,b,j+1,dp) + answer(a,i+1,b,j,dp);
    }
    return dp[i][j] = answer(a,i+1,b,j,dp);
}
int Solution::numDistinct(string a, string b)
{
    if(a.length()<b.length())return 0;

    vector<vector<int> > dp(a.length() , vector<int> (b.length(),-1));

    return answer(a,0,b,0,dp);
}
