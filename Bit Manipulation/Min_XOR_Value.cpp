int Solution::findMinXor(vector<int> &A)
{
    int n=A.size();

    sort(A.begin(),A.end());
    int min=INT_MAX;
    for(int i=0;i<n-1;i++)
    {
        int temp=(A[i]^A[i+1]);
        if(min>temp)
        {
            min =temp;
        }
    }

    return min;
}
