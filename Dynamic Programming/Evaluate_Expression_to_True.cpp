int answer(string str,int i,int j,char isTrue,map<string,int> &dp)
{
    if(i>j)return 0;

    if(i==j)
    {
        if(isTrue=='T')return str[i]=='T';

        return str[i]=='F';
    }

    string key = to_string(i) + to_string(j) + to_string(isTrue);

    if(dp.find(key)!=dp.end())return dp[key];

    int ans=0;

    for(int k=i+1;k<j;k=k+2)
    {
        int lt = answer(str,i,k-1,'T',dp);
        int lf = answer(str,i,k-1,'F',dp);
        int rt = answer(str,k+1,j,'T',dp);
        int rf = answer(str,k+1,j,'F',dp);

        if(str[k]=='&')
        {
            if(isTrue=='T')
            {
                ans+=lt*rt;
            }
            else
            {
                ans+=lt*rf + lf*rt + lf*rf;
            }
        }
        else if(str[k]=='|')
        {
            if(isTrue=='T')
            {
                ans+= lt*rt + lf*rt + lt*rf;
            }
            else
            {
                ans+= lf*rf;
            }
        }
        else
        {
            if(isTrue=='T')
            {
                ans+= lt*rf + lf*rt;
            }
            else
            {
                ans+= lf*rf + lt*rt;
            }
        }
    }

    return dp[key] = ans%1003;
}
int Solution::cnttrue(string A)
{
    map<string,int> dp;
    return answer(A,0,A.length()-1,'T',dp)%1003;
}
