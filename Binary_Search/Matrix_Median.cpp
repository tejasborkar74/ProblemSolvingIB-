int Solution::findMedian(vector<vector<int> > &mat)
{
    int r=mat.size();
    int c=mat[0].size();

    int req=(r*c+1)/2;

    int lo=INT_MAX,hi=INT_MIN;

    for(int i=0;i<r;i++)
    {
        if(mat[i][0]<lo)lo=mat[i][0];

        if(mat[i][c-1]>hi)hi=mat[i][c-1];
    }

    while(lo<hi)
    {
        int mid=lo + (hi-lo)/2;

        int temp=0;

        for(int i=0;i<r;i++)
        {
            temp+=upper_bound(mat[i].begin(),mat[i].end(),mid)-mat[i].begin();
        }

        if(temp<req)lo=mid+1;

        else
            hi=mid;
    }

    return lo;
}
