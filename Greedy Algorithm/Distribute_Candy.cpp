int Solution::candy(vector<int> &A)
{
    int n=A.size();

    vector<int> ans(n);

    fill(ans.begin(),ans.end(),1);

    //left check
    for(int i=1;i<n;i++)
    {
        if(A[i]>A[i-1])
        {
            ans[i]=ans[i-1]+1;
        }
    }

    //right check

    for(int i=n-2;i>=0;i--)
    {
        if(A[i]>A[i+1])
        {
            ans[i]=max(ans[i],ans[i+1]+1);
        }
    }

    int s=0;

    for(int i=0;i<n;i++)
    {
        s+=ans[i];
    }

    return s;
}
