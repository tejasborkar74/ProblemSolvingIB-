bool isPalindrom(string ans)
{
    for(int i=0,j=ans.length()-1;i<j;i++,j--)
    {
        if(ans[i]!=ans[j])return false;
    }

    return true;
}

int answer(string str)
{
   map<char,int> freq;

    for(int i=0;i<str.length();i++)
    {
        freq[str[i]]++;

        if(freq[str[i]]>2)return 1;
    }

    string ans="";
    for(int i=0;i<str.length();i++)
    {
        if(freq[str[i]]>=2)
        {
            ans.push_back(str[i]);
        }
    }

    int k=ans.length();
    if(isPalindrom(ans))
    {
        if(k%2==1)
        {
            return ans[k/2]==ans[k/2-1] ? 1 : 0;
        }

        return 0;
    }

    return 1;
}

int Solution::anytwo(string A)
{
    return answer(A);
}
