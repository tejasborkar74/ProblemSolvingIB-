vector<int> Solution::solve(vector<vector<int> > &A)
{
    int n = A.size();
    int c = A[0].size();
    priority_queue<int,vector<int> , greater<int> > q;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<c;j++)
        {
            q.push(A[i][j]);
        }
    }

    vector<int> ans;

    while(!q.empty())
    {
        ans.push_back(q.top());
        q.pop();
    }

    return ans;
}
