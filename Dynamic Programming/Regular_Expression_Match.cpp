string mergeallstars(string b)
{
    string ans="";
    ans.push_back(b[0]);

    for(int i=1;i<b.length();i++)
    {
        if(!(b[i]=='*' && b[i-1]=='*'))
        {
            ans.push_back(b[i]);
        }
    }

    return ans;
}
int answer(string &a,string &b,int i,int j,vector<vector<bool> > &dp)
{
    if(i==0 && j==0)return true;

    if(i==0 || j==0)
    {
        if(j==1)
        {
            if(b[j-1]=='*')return true;
        }

        return false;
    }

    if(dp[i][j]== false)return dp[i][j];

    if(a[i-1]==b[j-1] || b[j-1]=='?')return dp[i][j] = answer(a,b,i-1,j-1,dp);

    if(b[j-1]=='*')
    {
        return dp[i][j] = answer(a,b,i,j-1,dp) || answer(a,b,i-1,j,dp);
    }

    return dp[i][j]=false;
}
int Solution::isMatch(const string a, const string b)
{
    string B = mergeallstars(b);
    string A = a;
     vector<vector<bool> > dp(A.length()+1, vector<bool> (B.length()+1, true));
    return answer(A,B,A.length(),B.length(),dp);
}
