int Solution::atoi(const string A)
{
    int  i=0;
    while( i < A.length() && A[i] == ' ')
    {
        i++;
    }
    bool neg = false;

    int ans =0;

    if(i>=A.length())return 0;

    if(A[i] == '-')
    {
        neg=true;
        i++;
    }
    else if(A[i] == '+')
    {
        neg = false;
        i++;
    }


    while(i<A.length() && isdigit(A[i]))
    {
        if(ans > INT_MAX/10 || (ans == INT_MAX/10 && (A[i]-'0' > INT_MAX%10)) )
        {
            return neg ? INT_MIN : INT_MAX;
        }

        ans = ans*10 + (A[i]-'0');

        i++;
    }

    return neg ? -1*ans : ans;

}
