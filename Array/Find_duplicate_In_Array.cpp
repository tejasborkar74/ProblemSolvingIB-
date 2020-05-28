int Solution::repeatedNumber(const vector<int> &arr)
{
    int n=arr.size();
    vector<int> ans(n+1,0);

    for(int i=0;i<n;i++)
    {
        ans[arr[i]]++;
        if(ans[arr[i]]>1)
        {
            return arr[i];
        }
    }
    return -1;
}
