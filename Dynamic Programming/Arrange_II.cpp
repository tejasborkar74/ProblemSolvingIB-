unordered_map<string,int> dp;
int answer(string str,int n,int p)
{
    if(p==0)
    {
        int w=0,b=0;
        for(int i=0;i<n;i++)
        {
            if(str[i] == 'W')w++;
            if(str[i] == 'B')b++;
        }

        return w*b;
    }

    if(p >= n)return -1;

    string key = str+ " " + to_string(p);

    if(dp.find(key) != dp.end())return dp[key];

    int ans = INT_MAX;

    for(int i=0;i<n-p;i++)
    {
        string temp = str.substr(0,i+1);
        string temp2 = str.substr(i+1);

         int w=0,b=0;
        for(int j=0;j<temp.length();j++)
        {
            if(temp[j] == 'W')w++;
            if(temp[j] == 'B')b++;
        }

        int next = answer(temp2 , temp2.length() ,p-1);

        ans = min(ans , b*w + next);

    }

    return dp[key] = ans;
}
int Solution::arrange(string str, int k)
{
    int n = str.length();

    return answer(str,n,k-1);
}
