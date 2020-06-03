int Solution::nTriang(vector<int> &A)
{
    int mod=1e9+7;
    sort(A.begin(),A.end());

    int n=A.size();
    int count=0;
    for(int i=n-1;i>=2;i--)
    {
        int l=0;
        int r=i-1;

        while(l<r)
        {
            if(A[l] + A[r] <=A[i])
            {
                l++;
            }
            else
            {
                count=(count + (r-l)%mod)%mod;

            }
        }
    }

    return count;
}
