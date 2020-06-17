int Solution::bulbs(vector<int> &A)
{
    int currON=1;
    int ans=0;

    for(int i=0;i<A.size();i++)
    {
        if(A[i]!=currON)
        {
            ans++;

            currON=A[i];
        }
    }

    return ans;
}
