int Solution::lengthOfLongestSubstring(string str)
{
    map<char,int> mp;
    mp.clear();
    int ct=0,ans=1;

    if(str.length()==0)return 0;

    int i=0;

    while(i<str.length())
    {
        if(mp.find(str[i])==mp.end())
        {
            ct++;
            mp[str[i]]=i;
            i++;
        }
        else
        {
            i=mp[str[i]]+1;

            mp.clear();
            if(ct>ans)
            {
                ans=ct;
            }

           ct=0;

        }
    }

    if(ct>ans)return ct;


    return ans;
}
