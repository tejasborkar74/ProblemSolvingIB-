int Solution::hammingDistance(const vector<int> &A)
{
    vector <int> count(32,0);
    const int mod=1000000007;
    for(int i=0;i<A.size();i++)
    {
        int inx=0,num=A[i];
        while(num)
        {
            count[inx]+=(num&1);
            num=(num>>1);
            inx++;
        }

    }
    int ans=0;
    for(int i=0;i<32;i++)
    {
        ans= (ans + 2*count[i]*(A.size() - count[i])) %mod;
    }
    return ans;

}
