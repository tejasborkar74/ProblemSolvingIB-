vector<int> Solution::twoSum(const vector<int> &arr, int k)
{
    vector<int> ans;

    map<int,int> mp;

    for(int i=0;i<arr.size();i++)
    {
        if(mp.find(k-arr[i])!=mp.end())
        {
           ans.push_back(mp[k-arr[i]]+1);
           ans.push_back(i+1);

           return ans;
        }

        if(mp.find(arr[i])==mp.end())
        {
            mp[arr[i]]=i;
        }
    }

    return ans;

}
