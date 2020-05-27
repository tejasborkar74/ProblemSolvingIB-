int Solution::solve(vector<int> &arr)
{
    int n=arr.size();
    sort(arr.begin(),arr.end());

    for(int i=0;i<n;i++)
    {
        //numbers not reapting
        while(arr[i]==arr[i+1] && i<n)
        {
            if(i==n-1)
            {
                break;
            }
            i++;
        }
        if(abs(i-(n-1))==arr[i])
        {
            return 1;
        }
    }

    return -1;

}
