int Solution::solve(vector<int> &arr, int b)
{
    int curr = 0 ,j ,i,ans =INT_MIN;
    for(i=0;i<=b-1;i++)
    {
        curr+= arr[i];
    }
    i--;
    j=arr.size();

    while(i>=-1)
    {
        if(i==b-1)
            ans = max(ans,curr);
        else
        {
            curr = curr-arr[i+1]+arr[j];
            ans = max(ans,curr);
        }

        i--;
        j--;
    }


    return ans;


}
