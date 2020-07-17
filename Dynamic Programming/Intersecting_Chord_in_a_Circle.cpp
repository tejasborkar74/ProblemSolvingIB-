int Solution::chordCnt(int A)
{
    if(A<=1)return A;
    long long  dp[2*A +1];

    dp[0]=1;
    dp[2]=1;


    for(int i=4;i<=2*A;i+=2)
    {
          dp[i]=0;
        for(int j=0;j<=i-2 ; j+=2)
        {
            dp[i] = (dp[i]%1000000007 + (dp[j]%1000000007)*(dp[i-j-2]%1000000007)%1000000007)%1000000007;
        }
    }

    return dp[2*A]%1000000007;
}


