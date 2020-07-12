int Solution::maxProduct(const vector<int> &arr)
{
    int cmax = arr[0] , cmin = arr[0];
    int premax=arr[0] , premin=arr[0];

    int ans=arr[0];

    for(int i=1;i<arr.size();i++)
    {
        cmax = max(premax*arr[i] ,max(premin*arr[i] , arr[i]) );
        cmin = min(premax*arr[i] , min(premin*arr[i] , arr[i]) );

        ans=max(ans,cmax);

        premax=cmax;
        premin=cmin;
    }

    return ans;
}
