int Solution::solve(string str)
{
    stack<char> st;

    for(int i=0;i<str.length();i++)
    {
        if(str[i]==')')
        {
            if(st.empty())return 0;

            st.pop();
        }
        else
        {
            st.push('(');
        }
    }

    if(st.empty())return 1;

    return 0;
}
