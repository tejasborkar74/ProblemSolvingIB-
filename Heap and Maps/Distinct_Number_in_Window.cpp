vector<int> Solution::dNums(vector<int> &arr, int k)
{
    map<int,int> mp;

    int count=0;
    vector<int> ans;

    for(int i=0;i<k;i++)
    {
        if(mp[arr[i]]==0)count++;

        mp[arr[i]]++;
    }
    ans.push_back(count);

    for(int i=k;i<arr.size();i++)
    {
        if(mp[arr[i-k]]==1)count--;

        mp[arr[i-k]]--;

        if(mp[arr[i]]==0)count++;

        mp[arr[i]]++;

        ans.push_back(count);
    }


    return ans;

}
