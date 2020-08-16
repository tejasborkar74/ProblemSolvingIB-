int Solution::perfectPeak(vector<int> &A)
{
    int n = A.size();

    vector<int> left(n) ,right(n);

    left[0] = A[0];
    int m = A[0];
    for(int i=1;i<n;i++)
    {
        if(A[i] > m)
        {
            left[i] = 1;
            m = A[i];
        }

    }
    right[n-1] = A[n-1];
    m = A[n-1];
    for(int i=n-2;i>=0;i--)
    {
        if(A[i] < m)
        {
            right[i] = 1;
            m= A[i];
        }

    }

    for(int i=1;i<n-1;i++)
    {
        if(left[i] == 1 && right[i]==1)return 1;
    }

    return 0;
}
