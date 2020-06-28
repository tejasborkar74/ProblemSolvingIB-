
int mini(int a,int b)
{
    return a<b ? a : b;
}
int answer(vector<int> arr)
{
    int dp[arr.size()]={0};
    dp[0]=1;

    for(int i=0;i<arr.size();i++)
    {
        if(dp[i]==0)return 0;

        int jumps=arr[i];

        for(int j=i+1;j<=mini(arr.size()-1,jumps+i);j++)
        {
            dp[j]=1;
        }
    }

    return dp[arr.size()-1];
}

int Solution::canJump(vector<int> &arr)
{

    return answer(arr);
}
