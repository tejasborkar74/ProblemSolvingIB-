//Brute force
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

//Optimised O(n)

int Solution::lengthOfLongestSubstring(string str)
{
  int ans=0,i=0,j=-1;

  vector<int> mp(128,-1);

  while(i<str.length())
  {
      j=max(j,mp[str[i]]);

      ans=max(ans,i-j);

      mp[str[i]]=i;
      i++;
  }

    return ans;
}
