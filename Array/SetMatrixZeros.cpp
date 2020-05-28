void Solution::setZeroes(vector<vector<int> > &mat)
{   // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int n=mat.size(),m=mat[0].size();

    vector<int> row(n,0);
    vector<int> col(m,0);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(mat[i][j]==0)
            {
                row[i]=1;
                col[j]=1;
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(row[i]==1 ||  col[j]==1)
            {
               mat[i][j]=0;
            }
        }
    }

}
