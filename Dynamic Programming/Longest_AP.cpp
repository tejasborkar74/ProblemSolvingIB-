int Solution::solve(const vector<int> &arr)
{
    int n=arr.size();

    if(n<=2)return n;

    vector<unordered_map<int,int> > dp(n);

    int ans=2;

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1; j<n;j++)
        {
            int diff = arr[j]-arr[i];

            if(dp[i].find(diff)!=dp[i].end())
            {
                dp[j][diff] = dp[i][diff] +1;
            }
            else
            {
                dp[j][diff]=2;
            }

            ans = max(ans,dp[j][diff]);
        }
    }

    return ans;
}
