int Solution::singleNumber(const vector<int> &A)
{
    int n=A.size();

    int ans=0;


    for(int j=0;j<32;j++)
    {
        int count=0;
        for(int i=0;i<n;i++)
        {
            if((A[i]&(1<<j))!=0)
            count++;
        }

        if(count%3!=0)
        {
            ans=(ans|(1<<j));
        }
    }

    return ans;
}
