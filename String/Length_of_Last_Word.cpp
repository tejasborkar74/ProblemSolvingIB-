int Solution::lengthOfLastWord(const string str)
{
    int n=str.size();
    int ans=0;

    if(n==0)return 0;

    int j=n-1;

    while(str[j]==' ')
    {
        j--;
    }

    for(int i=j;i>=0;i--)
    {
        if(str[i]==' ')break;

        ans++;
    }
    return ans;
}
