int Solution::maxSubArray(const vector<int> &A) {

    int cs=A[0];
    int ms = A[0];
    for(int i=1;i<A.size();i++)
    {
        cs = max(cs+A[i],A[i]);

        if(cs > ms)
        ms = cs;

    }
    return ms;
}
