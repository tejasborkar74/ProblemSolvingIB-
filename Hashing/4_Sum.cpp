vector<vector<int> > Solution::fourSum(vector<int> &arr, int target)
{
    map<vector<int>, int > mp;

    vector<vector<int>> ans;

    sort(arr.begin(),arr.end());

    for(int i=0;i<arr.size()-3;i++)
    {
        for(int j=i+1;j<arr.size()-2;j++)
        {
            int l=j+1,r=arr.size()-1;

            while(l<r)
            {
                int sm= arr[i]+arr[j]+arr[l]+arr[r];

                if(sm==target)
                {
                    vector<int> temp;
                    temp.push_back(arr[i]);
                    temp.push_back(arr[j]);
                    temp.push_back(arr[l]);
                    temp.push_back(arr[r]);

                    if(mp.find(temp)==mp.end())//not present
                    {
                        mp[temp]=1;
                        ans.push_back(temp);
                    }
                    l++;
                    r--;
                }

                else if(sm>target)
                {
                    r--;
                }
                else
                {
                    l++;
                }
            }
        }
    }

    return ans;
}
