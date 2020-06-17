bool canPlace(vector<vector<char> > board,int n,int r,int c,int num)
{
    //row and col check
    for(int i=0;i<n;i++)
    {
        if(board[r][i]==num+'0')return false;
        if(board[i][c]==num+'0')return false;
    }

    //box check
     int rootn=sqrt(n);

    int boxStartRow = (r/rootn) * rootn;
    int boxStartCol = (c/rootn) * rootn;

    for(int i=boxStartRow;i<boxStartRow+3;i++)
    {
        for(int j=boxStartCol ; j<boxStartCol + 3 ; j++)
        {
            if(board[i][j]==num+'0')return false;
        }
    }

    return true;
}

bool solver(vector<vector<char> > &board,int n,int r,int c)
{

    if(r==n)return true;

    if(board[r][c]!='.')
    {
        if(c==n-1)
            {
                return solver(board,n,r+1,0);
            }
        else
            {
                return solver(board,n,r,c+1);
            }
    }

    for(int i=1;i<=n;i++)
    {
        if(canPlace(board,n,r,c,i))
        {
            board[r][c]=i+'0';

            bool success;
            if(c==n-1)
            {
                success=solver(board,n,r+1,0);
            }
            else
            {
                success=solver(board,n,r,c+1);
            }

            if(success)return true;


            board[r][c]='.';
        }
    }

    return false;
}
void Solution::solveSudoku(vector<vector<char> > &board)
{
    solver(board,board.size(),0,0);
}
