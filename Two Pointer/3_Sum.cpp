int Solution::threeSumClosest(vector<int> &A, int t)
{
    sort(A.begin(),A.end());
    int n=A.size();

    int diff=INT_MAX,ans;

    for(int i=0;i<n-1;i++)
    {
        int j=i+1;
        int k=n-1;
        while(k>j)
        {
            int sum=A[i]+A[j]+A[k];

            if(abs(sum-t)<diff)
            {
                ans=sum;
                diff=abs(sum-t);
            }

            if(sum>t)
            {
                k--;
            }
            else
            {
                j++;
            }

            if(diff==0)
            {
                return ans;
            }

        }

    }

    return ans;
}
