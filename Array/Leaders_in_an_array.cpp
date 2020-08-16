vector<int> Solution::solve(vector<int> &A)
{
    vector<int> ans;
    ans.push_back(A[A.size()-1]);
    int mx = A[A.size()-1];

    for(int i=A.size()-2 ; i>=0;i--)
    {
        if(A[i] > mx)
        {
            ans.push_back(A[i]);
            mx = A[i];
        }

    }

    return ans;
}
