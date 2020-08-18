int Solution::solve(string A)
{
    int n= A.length();
    int j=0;
    int idx;

    for(int i=n-1;i>0;i--)
    {
        idx = i , j=0;
        while(A[i] == A[j] && i>j)
        {
            i--;j++;
        }

        if(i<=j)
        {
            return n-1-idx;
        }

        i= idx;
    }

    return n-1;
}
