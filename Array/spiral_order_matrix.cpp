vector<vector<int> > Solution::generateMatrix(int A)
{
    vector<vector <int> > ans(A,vector<int>(A));
    int l=0,r=A-1,t=0,b=A-1;
    int dir=1,val=1;

    while(t<=b && l<=r)
    {
        if(dir==1)
        {
            for(int i=l;i<=r;i++)
            {
                ans[t][i]=val;
                val++;
            }
            t++;
            dir=2;
        }
        else if(dir==2)
        {
            for(int i=t;i<=b;i++)
            {
                ans[i][r]=val;
                val++;
            }
            r--;
            dir=3;
        }
        else if(dir==3)
        {
            for(int i=r;i>=l;i--)
            {
                ans[b][i]=val;
                val++;
            }
            b--;
            dir=4;
        }
        else if(dir==4)
        {
            for(int i=b;i>=t;i--)
            {
                ans[i][l]=val;
                val++;
            }
            l++;
            dir=1;
        }
    }

    return ans;
}
