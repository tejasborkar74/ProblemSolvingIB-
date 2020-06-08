int Solution::braces(string A)
{
    stack<char> s;
    int i=0;
    while(i<A.length())
    {
        if(A[i]=='(' || A[i]=='+'||A[i]=='-' || A[i]=='*'|| A[i]=='/')
        {
            s.push(A[i]);
        }
        else if(A[i]==')')
        {
            if(s.top()=='(')
            {
                return 1;
            }
            else
            {
                while(!s.empty() && s.top()!='(')
                {
                    s.pop();
                }
                s.pop();
            }
        }
        i++;

    }

    return 0;
}
