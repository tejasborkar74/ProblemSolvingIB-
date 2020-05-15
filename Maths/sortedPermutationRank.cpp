int Solution::findRank(string str)
{
    long long int fact[str.length()];

    fact[0]=1;
    for(int i=1;i<str.length();i++)
    {
        fact[i]=(i*fact[i-1])%1000003;
    }

    int ans=0;
    for(int i=0;i<str.length();i++)
    {
        int count=0;
        for(int j=i+1;j<str.length();j++)
        {
            if(str[i]>str[j])
            {
                count++;
            }
        }

        ans=(ans+(count*fact[str.length()-i-1])%1000003)%1000003;
    }
    return ans+1;
}
