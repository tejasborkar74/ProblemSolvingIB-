
bool isvowel(char ch)
{
    switch(ch)
    {
        case 'a':
            return true;

        case 'e':
            return true;
        case 'i':
           return true;
        case 'o':
           return true;
        case 'u':
            return true;
        case 'A':
            return true;
        case 'E':
            return true;
        case 'I':
            return true;
        case 'O':
           return true;
        case 'U':
           return true;

        default:
            return false;
    }
    return false;

}
int Solution::solve(string str)
{
    int n=str.length(),ans=0;

    for(int i=0;i<n;i++)
    {
        if(isvowel(str[i]))
        {
            ans+=(n-i);
        }
    }

    return ans%10003;
}
