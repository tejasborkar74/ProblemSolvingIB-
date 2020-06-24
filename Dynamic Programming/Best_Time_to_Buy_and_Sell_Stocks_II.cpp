int Solution::maxProfit(const vector<int> &A)
{
    int ans=0;

    if(A.size()<=1)return 0;

    for(int i=0;i<A.size()-1;i++)
    {
        if(A[i+1]>A[i])
        {
            ans+= A[i+1]-A[i];
        }
    }

    return ans;
}
