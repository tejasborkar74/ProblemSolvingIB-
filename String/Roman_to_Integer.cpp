int Solution::romanToInt(string A)
{
    map<char,int> mp;

    mp['I']=1;
    mp['V']=5;
    mp['X']=10;
    mp['L']=50;
    mp['C']=100;
    mp['D']=500;
    mp['M']=1000;

    int curr=0;

    int ans=0;

    for(int i=A.length()-1;i>=0;i--)
    {
        if(mp[A[i]] >= curr)
        {
            curr = mp[A[i]];
            ans+=mp[A[i]];
        }
        else if(mp[A[i]] < curr)
        {
            ans = ans - mp[A[i]];
        }

    }

    return ans;
}
