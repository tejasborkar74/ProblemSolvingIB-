int Solution::solve(vector<int> &A)
{
    int mn =A[0],mx=A[0];

    for(int i:A)
    {
        mn = min(mn,i);
        mx= max(mx,i);
    }

    return mn+mx;
}
