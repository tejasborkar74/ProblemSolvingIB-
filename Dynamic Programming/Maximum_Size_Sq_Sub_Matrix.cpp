int Solution::solve(vector<vector<int> > &A)
{
    vector<vector<int> > mat(A.size()+1,vector<int>(A[0].size()+1,0));

    int ans=0;
    for(int i=1;i<mat.size();i++)
    {
        for(int j=1;j<mat[i].size();j++)
        {
            if(A[i-1][j-1]==1)
            {
                mat[i][j] =1 + min(mat[i-1][j-1],min(mat[i-1][j],mat[i][j-1]));

                ans = max(ans,mat[i][j]);
            }
        }
    }

   return ans*ans;
}
