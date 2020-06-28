//DP O(n^2)
int mini (int a,int b)
{
    return a<b ? a:b;
}
int findanswer(vector<int> arr)
{
    int dp[arr.size()];
    memset(dp,-1,sizeof(dp));

    dp[0]=0;

    for(int i=0;i<arr.size();i++)
    {
        if(dp[i]==-1)return -1;;

        int jumps=arr[i];

        for(int j=i+1; j<=mini(i+jumps,arr.size()-1);j++)
        {
            if(dp[j]!=-1)
            {
                dp[j]=mini(dp[j],dp[i]+1);
            }
            else
            {
               dp[j]=dp[i]+1;
             }

        }
    }

    return dp[arr.size()-1];
}
int Solution::jump(vector<int> &A)
{
    if(A.size()<=1)return 0;
   return findanswer(A);
}
