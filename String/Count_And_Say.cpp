string Solution::countAndSay(int a)
{
    if(a==1)
    {
        return "1";
    }
    if(a==2)return "11";
    string temp="11";

    for(int i=3;i<=a;i++)
    {
        string ans="";
        int count=1;
        char ch=temp[0];
        for(int i=1;i<temp.length();i++)
        {
            if(temp[i]!=ch)
            {
                ans=ans + to_string(count);
                ans+=ch;
                count=0;
                ch=temp[i];
            }

            count++;
        }

        ans=ans + to_string(count);
        ans+=ch;

        temp=ans;

    }

    return temp;
}
