int Max(int a,int b)
{
    if(a>b)return a;

    return b;
}

int Min(int a,int b)
{
    if(a<b)return a;

    return b;
}
int Solution::trap(const vector<int> &A)
{
    vector<int> left(A.size()),right(A.size());
    left[0]=A[0];

    for(int i=1;i<A.size();i++)
    {
        left[i]=Max(left[i-1],A[i]);
    }

    right[A.size()-1]=A[A.size()-1];

    for(int i=A.size()-2;i>=0;i--)
    {
        right[i]=Max(right[i+1],A[i]);
    }
    int ans=0;

    for(int i=0;i<A.size();i++)
    {
        ans+=Min(left[i],right[i])-A[i];
    }

    return ans;
}
