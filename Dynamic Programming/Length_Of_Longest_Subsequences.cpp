int Solution::longestSubsequenceLength(const vector<int> &arr)
{
    int n=arr.size();
    if(n==0)return 0;
    vector<int> inc(n),dec(n);

    inc[0]=1;

    for(int i=1;i<n;i++)
    {
        inc[i]=1;
        for(int j=0;j<i;j++)
        {
            if(arr[j]<arr[i] && inc[i]<inc[j]+1)
            {
                inc[i]=inc[j]+1;
            }
        }
    }

    dec[n-1]=1;

    for(int i=n-2;i>=0;i--)
    {
        dec[i]=1;

        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j] && dec[i]<dec[j]+1)
            {
                dec[i]=dec[j]+1;
            }
        }
    }

    int ans=0;

    for(int i=0;i<n;i++)
    {
        ans=max(ans,inc[i]+dec[i]-1);
    }

    return ans;
}
