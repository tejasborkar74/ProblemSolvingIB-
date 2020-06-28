
int findAnswer(int i, string &a, set<string>& mp,int *dp)
{
    if(i==a.size())return 1;



    if(dp[i]!=-1)return dp[i];

    int ans=0;
    string temp="";

    for(int j=i;j<a.size();j++)
    {
        temp+=a[j];

        if(mp.find(temp)!=mp.end())
        {
            ans=ans+findAnswer(j+1,a,mp,dp);

            if(ans>0)
            {
                return dp[i]=1;
            }
        }
    }

    return dp[i]=0;
}

int Solution::wordBreak(string a, vector<string> &b)
{
    set<string> mp;
    int dp[a.length()];

    for(int i=0;i<a.length();i++)
    {
        dp[i]=-1;
    }


    for(int i=0;i<b.size();i++)
    {
        mp.insert(b[i]);
    }

    return findAnswer(0,a,mp,dp);
}
