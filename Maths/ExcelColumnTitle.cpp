string Solution::convertToTitle(int n)
{
    char arr[26]={ 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    string ans;
    while(n)
    {
        n=n-1;
        int rem=n%26;
        ans=arr[rem] + ans;
        n=n/26;
    }
    return ans;
}
