int Solution::reverse(int n)
{
    int ans=0;

    // int sign=1;
    // if(n<0)
    // {
    //     sign=-1;
    //     n=-n;
    // }

    while(n!=0)
    {
        int rem=n%10;

        int temp=rem + ans*10;
        if(temp/10 !=ans)
        {
            return 0;
        }
        ans=temp;
        n=n/10;

    }

    return ans;
}
