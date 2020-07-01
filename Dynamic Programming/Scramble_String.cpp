unordered_map<string,int> dp;
int solve(string a,string b)
{
    if(a==b)return 1;

    if(a.length()<=1)return 0;

    string key = a + " " + b;

    if(dp.find(key)!=dp.end())return dp[key];

    int  ans=0;

    int n=a.length();

    for(int i=1;i<n;i++)
    {
        //swap
        int condn1 = (solve(a.substr(0,i),b.substr(n-i,i)) && solve(a.substr(i,n-i),b.substr(0,n-i))) ? 1 :0;

        //noswap
        int condn2 = (solve(a.substr(0,i),b.substr(0,i)) && solve(a.substr(i,n-i),b.substr(i,n-i))) ? 1 : 0;

        if(condn1 || condn2)
        {
            ans = 1;
            break;
        }
    }

    return dp[key] = ans;
}
int Solution::isScramble(const string A, const string B)
{
    if(A.length()!=B.length())return 0;

    if(A.length()==0 && B.length()==0)return 1;

    return solve(A,B);
}
