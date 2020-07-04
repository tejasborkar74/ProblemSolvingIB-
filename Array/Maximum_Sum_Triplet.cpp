int Solution::solve(vector<int> &arr)
{
    int i=0,j=arr.size()-1,k=i+1;
    int ans=0;

    for( i=0;i<arr.size()-3;i++)
    {
        for( j=arr.size()-1;j>=3;j--)
        {
            for(k=i+1;k<j;k++)
            {
                if(arr[i]<arr[k] && arr[k]<arr[j])
                {
                    ans = max(ans, arr[i]+arr[j]+arr[k]);
                }
            }
        }
    }

    return ans;
}
