int Solution::coverPoints(vector<int> &A, vector<int> &B)
{
    int ans=0;
    for(int i=0;i<A.size()-1;i++)
    {
        ans=ans+max(abs(A[i]-A[i+1]),abs(B[i]-B[i+1]));
    }

    return ans;
}
