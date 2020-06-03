int Solution::solve(vector<int> &A, vector<int> &B, vector<int> &C)
{
    int i=0,j=0,k=0,ans=INT_MAX;

    while(i<A.size() && j<B.size() && k<C.size())
    {
        int temp=abs(max({A[i],B[j],C[k]})-min({A[i],B[j],C[k]}));

        if(temp<ans)
            ans=temp;

        if(A[i]<=B[j] && A[i]<=C[k])
        {
            i++;
        }
        else if(A[i]>=B[j] && B[j]<=C[k])
        {
            j++;
        }
        else if(C[k]<=B[j] && A[i]>=C[k])
        {
            k++;
        }
    }

    return ans;
}
