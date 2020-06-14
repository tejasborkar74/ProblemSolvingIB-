vector<vector<string> > ans;

bool issafe(vector<vector<int> > board,int i,int j,int n)
{
    //col check
    for(int r=0;r<i;r++)
    {
        if(board[r][j]==1)return false;
    }
    int x=i,y=j;

    //left diagonal
    while(x>=0 && y>=0)
    {
        if(board[x][y]==1)return false;

        x--;
        y--;
    }

    //right diagonal

    x=i,y=j;
    while(x>=0 && y<n)
    {
        if(board[x][y]==1)return false;

        x--;
        y++;
    }

    return true;
}

bool arrangeQ(vector<vector<int> > board,int i,int n)
{
    if(i==n)
    {
        vector<string> temp;
        string str="";
         for(int x=0;x<n;x++)
        {
            str="";
            for(int y=0;y<n;y++)
            {
                if(board[x][y]==1)
                    str=str+"Q";

                else
                    str=str+".";
            }
            temp.push_back(str);

        }

        ans.push_back(temp);
        return false;
    }

     for(int j=0;j<n;j++)
    {
        if(issafe(board,i,j,n))
        {
            board[i][j]=1;
            bool nextsafe=arrangeQ(board,i+1,n);
            if(nextsafe==true)
            {
               return true;
            }
        }
        board[i][j]=0;
    }
    return false;
}
vector<vector<string> > Solution::solveNQueens(int n)
{
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    ans.clear();

    vector<vector<int> > board(n,vector<int> (n,0));

    arrangeQ(board,0,n);

    return ans;
}
