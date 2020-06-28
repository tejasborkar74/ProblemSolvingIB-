vector<int> Solution::findPerm(const string str, int n)
{
    vector<int> ans;
    int cI=0,cD=0;

    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='I')cI++;

        if(str[i]=='D')cD++;
    }

    ans.push_back(cD+1);
    int I=cD+2;
    int D=cD;

    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='I')
        {
            ans.push_back(I++);
        }
        else
        {
            ans.push_back(D--);
        }
    }

    return ans;
}
