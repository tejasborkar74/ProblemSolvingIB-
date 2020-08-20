int Solution::solve(vector<int> &A)
{
    int range = 0;

    for(int i : A)range+=i;

    int dp[A.size() +1 ][range+1];

    for(int i=0;i<=A.size();i++)
    {
        dp[i][0] = 1;
    }

    int mn = INT_MAX;
    for(int i=1;i<=range;i++)dp[0][i]=0;

    for(int i=1;i<=A.size();i++)
    {
        for(int j=1;j<=range;j++)
        {
            if(A[i-1] <= j)
            {
                dp[i][j] = dp[i-1][j-A[i-1]] || dp[i-1][j];
            }
            else
            {
                dp[i][j] = dp[i-1][j];
            }

            if(i==A.size() && dp[i][j])
            {
                 mn = min(mn , abs(range-2*j));
            }
        }
    }


    return mn;
}
