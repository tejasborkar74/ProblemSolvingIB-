vector<vector<int> > Solution::diagonal(vector<vector<int> > &mat)
{
    int n=mat.size();

    vector<vector<int> > ans(2*n - 1);

    for(int i=0;i<(2*n - 1);i++)
    {
        if(i<n)
        {
            ans[i]=vector<int> (i+1);

            int x=0,y=i,j=0;
            while(y>=0)
            {
                ans[i][j]=mat[x][y];

                x++;
                y--;
                j++;
            }

        }
        else
        {
            ans[i]=vector<int> ((2*n-1)-i);

            int x=i-(n-1),y=n-1,j=0;
            while(x<n)
            {
                ans[i][j]=mat[x][y];

                x++;
                y--;
                j++;
            }

        }
    }

    return ans;
}
