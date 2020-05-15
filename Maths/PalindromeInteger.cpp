int Solution::isPalindrome(int A)
{
    string str=to_string(A);
    int start=0,end=str.length()-1;

    while(start<end)
    {
        if(str[start]!=str[end])
        {
            return false;
        }
        end--;
        start++;
    }
    return true;
}
