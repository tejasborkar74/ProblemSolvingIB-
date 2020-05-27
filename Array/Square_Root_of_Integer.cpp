int Solution::sqrt(int a)
{
    int s=0,e=a/2;
    if(a==1)return 1;
    int ans=0;

    while(s<=e)
    {
        long long int mid=(s+e)/2;
        if(mid*mid==a)
        {
            return mid;
        }
        else if(mid*mid<a)
        {
            ans=mid;
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
    }
    return ans;
}
