
void fill(vector<string> &arr,vector<vector<int> > &ans,int row,int col)
{
    int r,c;

    r= row-1;
    c=col;
     // col

    while(r>=0)
    {
        ans[r][c]+=1;
        if(arr[r][c]=='1')break;
        r--;
    }

    r=row+1;
    c=col;

    while(r<ans.size())
    {
        ans[r][c]+=1;
        if(arr[r][c]=='1')break;
        r++;
    }

    //row
    c=col-1;
    r=row;

    while(c>=0)
    {
        ans[r][c]+=1;
        if(arr[r][c]=='1')break;
        c--;
    }

    c=col+1;
    r=row;

    while(c<arr[0].size())
    {
        ans[r][c]+=1;
        if(arr[r][c]=='1')break;
        c++;
    }

    //diagonals

    r=row-1;
    c=col+1;

    while(r>=0 && c<ans[0].size())
    {
        ans[r][c]+=1;
        if(arr[r][c]=='1')break;
        r--;
        c++;
    }


    r=row+1;
    c=col-1;

    while(r<ans.size() && c>=0)
    {
        ans[r][c]+=1;
        if(arr[r][c]=='1')break;
        r++;
        c--;
    }

    r=row-1,c=col-1;

    while(r>=0 && c>=0)
    {
        ans[r][c]+=1;
        if(arr[r][c]=='1')break;
        r--;
        c--;
    }

    r=row+1,c=col+1;

    while(r<ans.size() && c<ans[0].size())
    {
        ans[r][c]+=1;
        if(arr[r][c]=='1')break;
        r++;
        c++;
    }

   // return ans;

}

vector<vector<int> > Solution::queenAttack(vector<string> &arr)
{
    vector<vector<int> > ans(arr.size(),vector<int> (arr[0].size(),0));

    for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<arr[i].size();j++)
        {
            if(arr[i][j]=='1')
            {
                fill(arr,ans,i,j);
            }
        }
    }

    return ans;


}
