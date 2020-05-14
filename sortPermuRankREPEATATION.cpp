#define mod 1000003
long long int power(long long int x,long long int y)
{
    //base case
    if(x==0)return 0;
    if(y==0)return 1;

    //if(y is even)
    long long int result=0;
    if(y%2==0)
    {
        result=power(x,y/2);
        result= (result*result)%mod;
    }
    else
    {
        result= (x * power(x,y-1)%mod)%mod;
    }

    return result;
}
int Solution::findRank(string str)
{
    long long int fact[str.length()];

    fact[0]=1;
    for(int i=1;i<str.length();i++)
    {
        fact[i]=(i%mod * (fact[i-1])%mod )%mod;
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
        map<char,int> m;
        for(int k=i;k<str.length();k++)
        {
            m[str[k]]++;
        }
        long long int d=1;

        for(auto a:m)
        {
         d= ((d)%mod * (fact[a.second])%mod ) %mod;
        }

        //ans=ans + count*fact[str.length-i-1]/d

        ans= (ans+ count * (fact[str.length()-i-1]%mod * power(d,mod-2)%mod)%mod)%mod;
    }


    return (ans + 1)%mod;
}
