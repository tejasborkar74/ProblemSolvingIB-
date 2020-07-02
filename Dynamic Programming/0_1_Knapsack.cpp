//BOTTOM UP DP
int solveA(int n,vector<int> val,vector<int> wt,int tar,vector<vector<int> > &dp)
{

    //base case
    for(int i=0;i<n+1;i++)
    {
        dp[i][0]=0;
    }

    for(int i=0;i<=tar;i++)
    {
        dp[0][i]=0;
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=tar;j++)
        {
            if(wt[i-1]<=j)
            {
                dp[i][j] = max(val[i-1] + dp[i-1][j-wt[i-1]] , dp[i-1][j]);
            }
            else
            {
                dp[i][j] = dp[i-1][j];
            }
        }
    }

    return dp[n][tar];
}
int Solution::solve(vector<int> &A, vector<int> &B, int C)
{
    vector<vector<int> > dp(A.size()+1, vector<int>(C+1));
    return solveA(A.size(),A,B,C,dp);
}



//MEMOISATION
int solveA(int n,vector<int> val,vector<int> wt,int tar,vector<vector<int> > &dp)
{
    if(n==0 || tar==0)return 0;

    if(dp[n][tar]!=-1)return dp[n][tar];


    if(wt[n-1]<=tar)
    {
        return dp[n][tar] = max(val[n-1] + solveA(n-1,val,wt,tar-wt[n-1],dp) , solveA(n-1,val,wt,tar,dp));
    }
    else if(wt[n-1]>tar)
    {
        return dp[n][tar] = solveA(n-1,val,wt,tar,dp);
    }
}
int Solution::solve(vector<int> &A, vector<int> &B, int C)
{
    vector<vector<int> > dp(A.size()+1, vector<int>(C+1,-1));
    return solveA(A.size(),A,B,C,dp);
}
