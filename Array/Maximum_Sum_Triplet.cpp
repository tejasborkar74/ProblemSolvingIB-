//O(nlogn) using sets

int lowerValue(set<int> &s ,int n)
{
    auto itr = s.lower_bound(n);
    itr--;

    return *itr;
}
int Solution::solve(vector<int> &arr)
{
    vector<int> suff (arr.size() +1);

    suff[arr.size()]=0;

    for(int i=arr.size()-1 ;i >= 0;i--)
    {
        suff[i] = max(suff[i+1] , arr[i]);
    }

    set<int> s;
    s.insert(INT_MIN);
    int ans=0;

    for(int i=0;i<arr.size()-1;i++)
    {
        if(suff[i+1]>arr[i])
        {
            ans= max( ans , arr[i] + suff[i+1] + lowerValue(s,arr[i]));
            s.insert(arr[i]);
        }
    }

    return ans;
}


//BruteForce
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
