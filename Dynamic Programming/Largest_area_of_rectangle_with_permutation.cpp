int Solution::solve(vector<vector<int> > &A)
{
    int n = A.size();
    int m =A[0].size();

    for(int i=1;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(A[i][j] == 1)
            {
                A[i][j] += A[i-1][j];
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        sort(A[i].begin() ,A[i].end());
    }

    int ans = 0;


    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(A[i][j] > 0)
            {
                ans = max(ans , A[i][j]*(m-j));
            }
        }
    }

    return ans;
}
