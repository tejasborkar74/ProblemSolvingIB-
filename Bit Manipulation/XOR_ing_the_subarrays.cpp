int Solution::solve(vector<int> &A)
{
    int ans =0;
    for(int i=0;i<A.size();i++)
    {
        int temp =0;
        for(int j = i;j<A.size();j++)
        {
            temp = (temp^A[j]);
            ans = (ans^temp);
        }
    }

    return ans;
}
