#define ll long long


vector<int> Solution::repeatedNumber(const vector<int> &A) {

    vector<int> ans(2);

    ll n=A.size();

    ll sum = (n*(n+1))/2;

    ll ss=(n*(n+1)*(2*n+1))/6;

   // cout<<sum<<" "<<ss;

    for(int i=0;i<n; i++)
    {
        sum -= (ll)A[i];            //a-b
        ss -= (ll)A[i]*(ll)A[i];    //a^2 - b^2
    }

    ans[1] = (sum+ss/sum)/2;
    ans[0] = ans[1]-sum;

    return ans;

}
