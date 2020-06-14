vector<vector<int> > ans;
vector<int> temp;

void answer(int curr,int n,int k,vector<int> temp)
{
    if(temp.size()==k)
    {
        ans.push_back(temp);
        return ;
    }

    if(curr>n)return;

    temp.push_back(curr);

    answer(curr+1,n,k,temp);

    temp.pop_back();

    answer(curr+1,n,k,temp);
}
vector<vector<int> > Solution::combine(int n, int k)
{
    ans.clear();
    temp.clear();

    answer(1,n,k,temp);

    return ans;
}
