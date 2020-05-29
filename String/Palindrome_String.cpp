int Solution::isPalindrome(string str)
{
    int i=0,j=str.length()-1;
    while(i<=j)
    {
        if(!isalnum(str[i]))
        {
            i++;
            continue;
        }
        if(!isalnum(str[j]))
        {
            j--;
            continue;
        }
        if(str[i]!=str[j] && isdigit(str[i]))
        return 0;

        if(toupper(str[i])!=toupper(str[j]))
        return 0;


        i++;
        j--;
    }

    return 1;
}
