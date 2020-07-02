int answer(string a,string b,int i,int j,vector< vector<int> > &dp )
{
    if(i==0||j==0)return 0;

    if(dp[i][j]!=-1)return dp[i][j];

    if(a[i-1]==b[j-1])
    {
        return dp[i][j] = 1 + answer(a,b,i-1,j-1,dp);
    }
    else
    {
        return dp[i][j] = max(answer(a,b,i-1,j,dp) , answer(a,b,i,j-1,dp));
    }
}
int Solution::solve(string A, string B)
{
    vector<vector<int > > dp (A.size()+1 , vector<int> (B.size()+1, -1));
    return answer(A,B,A.size(),B.size(),dp);
}
