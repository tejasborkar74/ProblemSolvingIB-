vector<vector<int> > Solution::solve(int A)
{
    vector<vector<int>> ans(A);

    for(int i=0;i<A;i++)
    {
        ans[i] = vector<int>(i+1,0);
    }

    for(int i=0;i<A;i++)
    {
        ans[i][0]=1, ans[i][i]=1;
    }


    for(int i=0;i<A;i++)
    {
        for(int j=1;j<i;j++)
        {
            if(i<=j)
            break;
            else
            ans[i][j] = ans[i-1][j] + ans[i-1][j-1];
        }
    }
    return ans;
}
