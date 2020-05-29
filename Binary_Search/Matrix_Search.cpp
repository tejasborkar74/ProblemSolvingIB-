int Solution::searchMatrix(vector<vector<int> > &mat, int a)
{
    int row=mat.size();
    int c=mat[0].size();

    int currR=0;


    while(currR<row )
    {
        if(mat[currR][c-1]<a)
        {
            currR++;
        }
        else
        {
            int l=0,r=c-1;


            while(l<=r)
            {
                int mid=(l+r)/2;

                if(mat[currR][mid]==a)
                return 1;

                else if(mat[currR][mid]>a)
                {
                    r=mid-1;
                }
                else if(mat[currR][mid]<a)
                {
                    l=mid+1;
                }

            }

            return 0;
        }
    }

    return 0;
}
