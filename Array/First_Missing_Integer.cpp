int Solution::firstMissingPositive(vector<int> &arr)
{
    int n = arr.size();

    for(int i=0;i<n;i++)
    {
        int j = arr[i]-1;
           while(arr[i] <= n && arr[i] >0 && arr[i] != arr[j])
           {
               swap(arr[i] ,arr[j]);
               j = arr[i]-1;
           }
    }

    for(int i=0;i<n;i++)
    {
        if(arr[i] != i+1)
        {
            return i+1;
        }
    }

    return n+1;
}
