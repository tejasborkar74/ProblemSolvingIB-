int Solution::maxProfit(const vector<int> &A)
{
    int ans=0;

    if(A.size()<=1)return 0;

    int m=A[0];

    for(int i=0;i<A.size();i++)
    {
        if(m>A[i])
        {
            m=A[i];
        }

        ans=max(ans,A[i]-m);
    }

    return ans;
}
