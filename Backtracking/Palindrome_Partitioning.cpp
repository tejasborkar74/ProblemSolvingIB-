vector<vector<string> > ans;

bool isPalindrom(string str)
{
    for(int i=0,j=str.length()-1;i<=j;i++,j--)
    {
        if(str[i]!=str[j])return false;
    }

    return true;
}
void solve(string str,int i,vector<string> &temp)
{
    if(i==str.length())
    {
        ans.push_back(temp);
        return ;
    }


    string t="";
    for(int k=i+1;k<=str.length();k++)
    {
        t+=str[k-1];

        if(isPalindrom(t))
        {
            temp.push_back(t);

            solve(str,k,temp);

            temp.pop_back();
        }

    }
}
vector<vector<string> > Solution::partition(string A)
{
    vector<string> temp;
    ans.clear();

    solve(A,0,temp);

    return ans;
}
