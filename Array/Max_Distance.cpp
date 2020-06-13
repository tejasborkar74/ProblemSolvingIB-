int Solution::maximumGap(const vector<int> &A)
{
    int n=A.size();
    if(n==0)return -1;
    vector<pair<int,int> > arr;

    for(int i=0;i<n;i++)
    {
       arr.push_back({A[i],i});
    }


    sort(arr.begin(),arr.end());

    int mini=arr[0].second;

    int diff=0;

    for(int i=1;i<n;i++)
    {
        mini=min(mini,arr[i].second);

        diff=max(diff,arr[i].second-mini);
    }

    return diff;

}
