string Solution::solve(string str)
{int n=str.length();
    string ans="";



    for(int i=n-1;i>=0;i--)
    {
        if(str[i]!=' ')
        {
            int k=i;

            while(str[k]!=' ' && k>=0)
            {
                k--;
            }
            k=k+1;

            for(int x=k ;x<=i;x++)
            {
                ans+=str[x];
            }
            ans+=' ';

            i=k;
        }

    }

    ans=ans.substr(0,ans.length()-1);

    return ans;
}
