vector<int> Solution::lszero(vector<int> &A)
{
    // unordered_map<int,vector<int> > mp;
    // int ans=0;

    // for(int i=0;i<A.size();i++)
    // {
    //     vector<int> temp;
    //     int sta=0;
    //     int ct=0;
    //     for(int j=i;j<A.size();j++)
    //     {
    //         sta=sta+A[j];
    //         ct++;
    //         temp.push_back(A[j]);
    //         if(sta==0 && ct>ans)
    //         {
    //             ans=ct;
    //             mp[ans]=temp;
    //             if(ans==A.size()-i)
    //             {
    //                 return mp[ans];
    //             }
    //         }

    //     }
    //     temp.clear();
    // }

    // return mp[ans];

    map<int,int> mp;

    int cs=0;
    int ans=0,s=-1,e=-1;
   // int ct=0;

   mp[0]=-1;


    for(int i=0;i<A.size();i++)
    {
        cs=cs+A[i];

        if(mp.find(cs)==mp.end())
        {
            mp[cs]=i;
        }
        else
        {
          int temp=mp[cs];

          if(i-temp  > ans)
          {
              ans=i-temp;
              s=temp;
              e=i;
          }
        }
    }

    vector<int> vec;

    if(e==-1 && s==-1)
    {
        return vec;
    }

    for(int i=s+1;i<=e;i++)
    {
        vec.push_back(A[i]);
    }

    return vec;
}
