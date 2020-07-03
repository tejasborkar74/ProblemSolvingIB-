int Solution::solve(vector<vector<int> > &A)
{
    if(A.size()==1 && A[0].size()==1)return 1;
    vector<vector<int> > dp(A.size(), vector<int> (A[0].size(),0));

    int ans=0;

    dp[0][0]=1;
    for(int i=1;i<A.size();i++)
    {
        if(A[i][0]>A[i-1][0])
        {
           dp[i][0] = dp[i-1][0]+1;

           //ans=max(ans,dp[i][0]);
        }
        else{break;}
    }

    for(int i=1;i<A[0].size();i++)
    {
        if(A[0][i]>A[0][i-1])
        {
           dp[0][i] = dp[0][i-1]+1;

           //ans=max(ans,dp[0][i]);
        }
        else{break;}
    }

    for(int i=1;i<dp.size();i++)
    {
        for(int j=1;j<dp[i].size();j++)
        {
            if(A[i][j]>A[i-1][j] && dp[i-1][j]!=0)
            {
                dp[i][j]=1+ dp[i-1][j];
            }
            else if( A[i][j]>A[i][j-1] && dp[i][j-1]!=0 )
            {
                dp[i][j]=1+ dp[i][j-1];
            }

           // ans=max(ans,dp[i][j]);
        }
    }

    for(int i=0;i<dp[0].size();i++)
    {
        ans = max(ans,dp[A.size()-1][i]);
    }
    if(ans<=1)return -1;

    return ans;
}
