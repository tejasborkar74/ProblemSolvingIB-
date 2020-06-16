vector<string> ans;

void solve(int open,int close,string temp,int n)
{
    if(open>n)return;

    if(open==n && close==n)
    {
        ans.push_back(temp);
    }

    if(close>open)
    {
        return;
    }

    solve(open+1,close,temp + "(",n);
    solve(open,close+1,temp+")",n);

}
vector<string> Solution::generateParenthesis(int A)
{
    ans.clear();
    solve(0,0,"",A);

    return ans;
}
