int Solution::diffPossible(const vector<int> &arr, int k)
{
    int n=arr.size();

    if(n==0||n==1)return 0;

    map<int,int> mp;

    for(int i=0;i<n;i++)
    {
        if((mp.find(arr[i]+k)!=mp.end())||(mp.find(arr[i]-k)!=mp.end()))
        {
            return 1;
        }

        mp[arr[i]]=1;
    }

    return 0;
}
