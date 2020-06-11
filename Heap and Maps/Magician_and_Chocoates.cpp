int mod=1e9+7;
int Solution::nchoc(int k, vector<int> &arr)
{
    priority_queue<int> q;

    for(int i=0;i<arr.size();i++)
    {
        q.push(arr[i]);
    }
    long ans=0;

    while(k)
    {
        int temp=q.top();
        ans=(ans+temp)%mod;

        q.pop();

        temp=temp/2;

        q.push(temp);
        k--;
    }
    return ans%mod;
}
