int findBlock(int i,int j)
{
    if(i>=0 && i<=2)
    {
        if(j>=0 && j<=2)return 0;

        if(j>=3 && j<=5)return 1;

        if(j>=6 && j<=8)return 2;
    }
    if(i>=3 && i<=5)
    {
        if(j>=0 && j<=2)return 3;

        if(j>=3 && j<=5)return 4;

        if(j>=6 && j<=8)return 5;
    }
    if(i>=6 && i<=8)
    {
        if(j>=0 && j<=2)return 6;

        if(j>=3 && j<=5)return 7;

        if(j>=6 && j<=8)return 8;
    }

}
int Solution::isValidSudoku(const vector<string> &A)
{
    vector<map<int,int> > a(9);
    vector<map<int,int> > b(9);
    vector<map<int,int> > c(9);

    for(int i=0;i<A.size();i++)
    {
        for(int j=0;j<A[i].length();j++)
        {

            if(A[i][j]!='.')
            {
                int k= findBlock(i,j);

                if(a[i].find(A[i][j])!=a[i].end() || b[j].find(A[i][j])!=b[j].end() ||c[k].find(A[i][j])!=c[k].end())
                {
                    return 0;
                }
                else
                {
                    a[i][A[i][j]]=1;
                    b[j][A[i][j]]=1;
                    c[k][A[i][j]]=1;
                }
            }
        }
    }

    return 1;
}
