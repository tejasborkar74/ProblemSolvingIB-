vector<int> Solution::solve(vector<int> &A, int B)
{
    priority_queue<int ,vector<int> , greater<int> > q;

    for(int i : A)
    {
        q.push(i);
        if(q.size() > B)q.pop();
    }

    vector<int> ans ;

    while(!q.empty())
    {
        ans.push_back(q.top());
        q.pop();
    }

    return ans;
}
