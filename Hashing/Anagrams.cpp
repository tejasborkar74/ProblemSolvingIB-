vector<vector<int> > Solution::anagrams(const vector<string> &A)
{
    vector<vector<int> > ans;

    map<string,vector<int> >  mp;
    for(int i=0;i<A.size();i++)
    {
        string str=A[i];
        sort(str.begin(),str.end());

        if(mp.find(str)==mp.end())
        {
            vector<int > abc;
            abc.push_back(i+1);
            mp[str]=abc;
        }
        else
        {
            vector<int> temp=mp[str];
            temp.push_back(i+1);
            mp[str]=temp;
        }
    }

    for(auto i=mp.begin();i!=mp.end();i++)
    {
        ans.push_back(i->second);
    }

    sort(ans.begin(),ans.end());

    return ans;
}
