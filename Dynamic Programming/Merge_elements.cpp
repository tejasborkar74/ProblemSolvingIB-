vector<int> sum;
vector<vector<int> > dp;
int answer(vector<int> &arr,int i,int j)
{
    if(j-i==0)return 0;
    if(j-i==1)return arr[i]+arr[j];

    if(dp[i][j]!=-1)return dp[i][j];

    int ans = INT_MAX;
    for(int k=i;k<j;k++)
    {
        int left = answer(arr,i,k);
        int right = answer(arr,k+1,j);
        int sumleft = sum[k+1]-sum[i];
        int sumright = sum[j+1]-sum[k+1];

        ans = min(ans , left+right+sumleft+sumright);

    }

    return dp[i][j] = ans;
}
int Solution::solve(vector<int> &A)
{
    sum.clear();dp.clear();
    sum.push_back(0);
    dp.resize(A.size(),vector<int>(A.size(),-1));

    for(int i=0;i<A.size();i++)
    {
        sum.push_back(sum.back()+A[i]);
    }
    return answer(A,0,A.size()-1);
}
