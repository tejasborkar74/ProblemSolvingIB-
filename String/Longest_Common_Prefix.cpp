string Solution::longestCommonPrefix(vector<string> &str)
{
    string ans=str[0];
    int n=str.size();

    for(int i=1;i<n;i++)
    {
        string temp=str[i];
        string common="";
        int j=0;


        while(j<ans.size() && j<temp.size())
        {
            if(ans[j]==temp[j])
            {
                common+=ans[j];
            }
            else
            {
                break;
            }
            j++;
        }

        ans=common;
    }

    return ans;


}
