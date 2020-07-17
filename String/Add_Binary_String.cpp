string Solution::addBinary(string a, string b)
{
    int i = a.length()-1;
    int j = b.length()-1;

    string ans="";

    char carry = '0';

    while(i>=0 && j>=0)
    {
        if(a[i] == '0' && b[j] == '0')
        {
            if(carry == '0')
            {
                ans = "0" + ans;
            }
            else
            {
                carry = '0';

                ans = "1" + ans;
            }
        }

        else if(a[i] == '1' && b[j] == '1')
        {
            if(carry == '1')
            {
                ans = "1" + ans;
            }
            else
            {
                carry = '1';

                ans = "0" + ans;
            }
        }

        else
        {
            if(carry == '0')
            {
                ans = "1" + ans;
            }
            else
            {
                carry = '1';

                ans = "0" + ans;
            }
        }

        i--;
        j--;
    }

    while(i>=0)
    {
        if(a[i]=='0')
        {
            if(carry == '0')
            {
                ans = "0" + ans;
            }
            else
            {
                carry = '0';

                ans = "1" + ans;
            }
        }
        else
        {
            if(carry == '0')
            {
                ans = "1" + ans;
            }
            else
            {
                carry = '1';

                ans = "0" + ans;
            }
        }
        i--;
    }

    while(j>=0)
    {
        if(b[j]=='0')
        {
            if(carry == '0')
            {
                ans = "0" + ans;
            }
            else
            {
                carry = '0';

                ans = "1" + ans;
            }
        }
        else
        {
            if(carry == '0')
            {
                ans = "1" + ans;
            }
            else
            {
                carry = '1';

                ans = "0" + ans;
            }
        }
        j--;
    }

    if(carry == '1')
    {
        ans = "1" + ans;
    }

    return ans;

}
