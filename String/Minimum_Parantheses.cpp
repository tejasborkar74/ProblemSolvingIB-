int Solution::solve(string A)
{
    stack<char> st;
    int ans = 0;

    for(char ch : A)
    {
        if(ch == '(')
        {
            st.push(ch);
        }
        else
        {
            if(st.empty() || st.top() == ')')ans ++ ;

            else
            {
                st.pop();
            }
        }
    }

    return ans + st.size();
}
