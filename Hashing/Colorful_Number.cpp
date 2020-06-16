int Solution::colorful(int n)
{
    vector<int> digits;

    map<long,long> mp;
    int s=0;

    while(n)
    {
        int r=n%10;
        n=n/10;
        s++;

        if(mp.find(r)==mp.end())
        {
            mp[r]=1;
            digits.push_back(r);
        }
        else
        {
            return 0;
        }
    }

    for(int i=2;i<=s;i++ )
    {
        for(int j=0;j<=s-i;j++)
        {
            int t=0,p=1;

            while(t<i)
            {
                p=p*digits[j+t];
                t++;
            }

            if(mp.find(p)==mp.end())
            {
                mp[p]=1;
            }
            else
            {
                return 0;
            }
        }
    }

    return 1;
}
