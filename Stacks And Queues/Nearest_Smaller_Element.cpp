vector<int> Solution::prevSmaller(vector<int> &A)
{
    vector<int> ans = {-1};

    for(int i=1; i<A.size(); i++)
    {
        if(A[i-1] < A[i])
            ans.push_back(A[i-1]);
        else
        {
            int j;
            for(j=i-1; j>0 && ans[j]>=A[i]; j--);

            ans.push_back(ans[j]);
        }
    }
    return ans;
}
