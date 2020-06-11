int maximum(vector<int> arr)
{
    int m=INT_MIN;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]>m)m=arr[i];
    }

    return m;
}
long sumof(vector<int> arr)
{
    long sum=0;
    for(int i=0;i<arr.size();i++)
    {
        sum+=arr[i];
    }
    return sum;
}
bool isvalid(vector<int> arr,int painters,int mid)
{
    int p=1;
    long s=0;

    for(int i=0;i<arr.size();i++)
    {
        s+=arr[i];

        if(s>mid)
        {
            p++;
            s=arr[i];

            if(p>painters)return false;
        }
    }
    return true;
}
int Solution::paint(int A, int B, vector<int> &arr)
{
    long lo=maximum(arr);
    long hi=sumof(arr);
    long ans=-1;

    while(lo<=hi)
    {
        long mid = lo + (hi-lo)/2;

        if(isvalid(arr,A,mid))
        {
            ans=mid;
            hi=mid-1;
        }
        else
        {
            lo=mid+1;
        }
    }

    long temp=(ans*B)%10000003;

    return (int)temp;
}
