int Solution::coinchange2(vector<int> &arr, int tar)
{
    vector<int> dp (tar+1,0);

    dp[0]=1;

    for(int i=0;i<arr.size();i++)
    {
        for(int j=arr[i];j<=tar;j++)
        {
            dp[j] = (dp[j] + dp[j-arr[i]])% 1000007;
        }
    }

    return dp[tar];
}
