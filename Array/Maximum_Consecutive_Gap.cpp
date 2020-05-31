int Solution::maximumGap(const vector<int> &A)
{
    vector<int> vec=A;

    sort(vec.begin(),vec.end());
    int mx=0;

    for(int i=1;i<vec.size();i++)
    {
        mx=max(mx,vec[i]-vec[i-1]);
    }

    return mx;

}
