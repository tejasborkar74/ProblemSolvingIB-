int Solution::lis(const vector<int> &A)
{
    vector<int> arr(A.size());

    arr[0]=1;

    for(int i=1;i<A.size();i++)
    {
        arr[i]=1;
        for(int j=0;j<i;j++)
        {
            if(A[i]>A[j] && arr[i]<arr[j]+1)
            {
                arr[i]=arr[j]+1;
            }
        }
    }
    int ms=1;
    for(int i=0;i<arr.size();i++)
    {
        if(ms<arr[i])
        {
           ms=arr[i];
        }
    }

    return ms;
}
